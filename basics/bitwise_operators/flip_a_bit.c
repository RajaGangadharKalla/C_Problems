#include <stdio.h>
void main()
{
    int number, position;
    printf("Enter number and position of the bit to flip...\n");
    scanf("%d%d", &number, &position);
    printf("Result is %d", (number & (1 << position - 1)) ? number & (~(1 << position - 1)) : number | (1 << position - 1));
}