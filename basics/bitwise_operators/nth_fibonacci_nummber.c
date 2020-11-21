#include <stdio.h>
void main()
{
    int a = 0, b = 1, c = 0, nthNumber;
    scanf("%d", &nthNumber);
    if (nthNumber == 0)
    {
        printf("0");
    }
    else if (nthNumber == 1)
    {
        printf("1");
    }
    else
    {
        nthNumber -= 2;
        while (nthNumber > 0)
        {
            c = a + b;
            printf("%d,%d,%d,%d\n", a, b, c, nthNumber);

            if (nthNumber - 1 == 0)
            {
                printf("%d", c);
                break;
            }
            a = b;
            b = c;
            nthNumber--;
        }
    }
}