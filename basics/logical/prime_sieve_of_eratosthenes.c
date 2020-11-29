#include <stdio.h>
#include <math.h>

void main()
{
    int primes[10000], i, j, num, sqrt_num;
    printf("Enter a Number\n");
    scanf("%d", &num);
    sqrt_num = sqrt(num);

    //Initialiing array Elements to 0 and 1
    for (i = 0; i <= num; i++)
    {
        if (i & 1)
        {
            primes[i] = 1;
        }
        else
        {
            primes[i] = 0;
        }
    }
    primes[0] = 0;
    primes[1] = 0;
    primes[2] = 1;

    //Logic
    for (i = 3; i <= (sqrt_num + 1); i += 2)
    {
        for (j = (2 * i); j <= num; j += i)
        {
            primes[j] = 0;
        }
    }

    //Print Primes
    for (i = 1; i <= num; i++)
    {
        if (primes[i] == 1)
        {
            printf("%d\t", i);
        }
    }
}