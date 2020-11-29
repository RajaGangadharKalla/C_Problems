#include <stdio.h>
#include <time.h>

void bubble_sort(int[], int);
void print_array(int[], int);

void main()
{
    int sizeOfArray, i;
    int arr[100];
    clock_t start_time, end_time;
    printf("Enter the size of the array to be sorted\n");
    scanf("%d", &sizeOfArray);
    printf("Enter array elements:");
    for (i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &arr[i]);
    }
    start_time = clock();
    printf("Unsorted array:\t");
    print_array(arr, sizeOfArray);
    bubble_sort(arr, sizeOfArray);
    end_time = clock();
    printf("%.3f s", ((end_time - start_time) / 1000.0));
}

void bubble_sort(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] ^ arr[j + 1];
                arr[j + 1] = arr[j] ^ arr[j + 1];
                arr[j] = arr[j] ^ arr[j + 1];
            }
        }
    }
    printf("Sorted array:\t");
    print_array(arr, size);
}

void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}