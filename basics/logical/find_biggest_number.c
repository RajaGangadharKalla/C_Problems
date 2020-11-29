#include <stdio.h>
void main()
{
    int amongHowManyNumbers, number1, number2, number3, position;
    printf("How many numbers to be checked(2 or 3).\n");
    scanf("%d", &amongHowManyNumbers);
    if (amongHowManyNumbers == 2)
    {
        scanf("%d%d", &number1, &number2);
        printf("%d", (number1 > number2) ? number1 : number2);
    }
    else if (amongHowManyNumbers == 3)
    {
        scanf("%d%d%d", &number1, &number2, &number3);
        printf("%d", (number1 > number2) ? ((number1 > number3) ? number1 : number3) : ((number2 > number3) ? number2 : number3));
        //(number1 > number2 && number1 > number3) ? number1 : (number2 > number3) ? number2 : number3);
    }
    else
    {
        printf("Invalid input.");
    }
}