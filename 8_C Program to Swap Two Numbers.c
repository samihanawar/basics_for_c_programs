#include <stdio.h>
 main()
{
    float number1, number2;
    printf("Enter number1: ");
    scanf("%f", &number1);
    printf("\nEnter number2: ");
    scanf("%f", &number2);


    number1= number1 + number2;

    number2= number1 - number2;

    number1= number1 - number2;

    printf("\nAfter swapping number1= %.1f \nand number2= %.1f", number1, number2);
    return 0;
}
