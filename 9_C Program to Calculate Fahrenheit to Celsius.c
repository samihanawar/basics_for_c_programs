#include<stdio.h>
 main(){
    float fahrenheit,celsius;
    printf ("Enter the temperature in farenheit: ");
    scanf ("%f",&fahrenheit);
    celsius = ((fahrenheit-32)*5)/9;
    printf("\nThe temperature in Celsius : %f\n",celsius);

    return (0);
}
