#include <stdio.h>
 main() {
    float number1, number2, summation ;
    printf ("Enter any two numbers: ") ;
    scanf ("%f%f" , &number1, &number2);
    summation=number1+number2;
    printf ("\nSummation of your entered number is %f\n" ,summation) ;
    return 0 ;
}
