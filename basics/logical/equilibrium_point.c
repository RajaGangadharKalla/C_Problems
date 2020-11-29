#include <stdio.h>
void main()
{
    int sizeOfArray, i, j, sum1, sum2;
    int arr[100];
    printf("Enter the size of array..\n");
    scanf("%d", &sizeOfArray);
    for (i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum1 = arr[0];
    sum2 = arr[sizeOfArray - 1];
    for (i = 0, j = sizeOfArray - 1; i + 1 <= j - 1;)
    {
        printf("%d,%d,%d,%d,%d\n", i, j, sum1, sum2, arr[i + 1]);
        if (sum1 == sum2 && i + 1 == j - 1)
        {
            printf("%d", arr[i + 1]);
            break;
        }
        else if (i + 1 == j - 1)
        {
            printf("-1");
            break;
        }
        else if (sum1 < sum2)
        {
            sum1 += arr[i + 1];
            i++;
        }
        else
        {
            sum2 += arr[j - 1];
            j--;
        }
    }
}