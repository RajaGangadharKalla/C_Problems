#include <stdio.h>
#include <math.h>

void main()
{
    int num, i, count;
    printf("Enter a Number\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Not a Prime Number\n");
    }
    else if (num == 2)
    {
        printf("Prime Number\n");
    }
    else if (!(num & 1))
    {
        printf("Not a Prime Number\n");
    }
    else
    {
        for (i = 3; i <= (sqrt(num) + 1); i += 2)
        {
            if ((num % i) == 0)
            {
                count += 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("Prime Number\n");
        }
        else
        {
            printf("Not a Prime Number\n");
        }
    }
}