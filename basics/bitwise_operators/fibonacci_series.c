#include <stdio.h>

void main()
{
    int a, b, c, n;
    printf("Enter the nth term:\n");
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
}