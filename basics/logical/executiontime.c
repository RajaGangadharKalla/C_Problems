#include <stdio.h>
#include <time.h>

void main()
{
    int a, b, c, n;
    clock_t start_time, end_time;
    start_time = clock();
    printf("Enter the n value:\n");
    scanf("%d", &n);
    a = 0, b = 1;
    printf("%d\t%d\t", a, b);
    n -= 2;
    while (n > 0)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
        n--;
    }
    end_time = clock();
    printf("%li", end_time - start_time);
}