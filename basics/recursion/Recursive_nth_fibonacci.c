#include <stdio.h>
void main()
{
    int findNthFibonacciNumber(int n);
    int fibValue = 0, nthTerm;
    printf("Enter the nth term:\n");
    scanf("%d", &nthTerm);
    fibValue = findNthFibonacciNumber(nthTerm);
    printf("Fibonacci value is %d", fibValue);
}

int findNthFibonacciNumber(int nthTerm)
{
    if (nthTerm == 1)
    {
        return 0;
    }
    else if (nthTerm == 2)
    {
        return 1;
    }
    else
    {
        return findNthFibonacciNumber(nthTerm - 1) + findNthFibonacciNumber(nthTerm - 2);
    }
}