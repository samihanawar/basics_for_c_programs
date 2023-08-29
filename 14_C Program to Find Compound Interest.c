#include <stdio.h>
#include <math.h>
 main(){
 float principal, rate, time, compound_interest;
    printf("Enter the Principal:");
    scanf("%f",&principal);
    printf("\nEnter the Rate:");
    scanf("%f",&rate);
    printf("\nEnter the Time:");
    scanf("%f",&time);
    compound_interest = principal*(pow((1 + rate / 100), time));
    printf("\nCompound Interest = %f\n", compound_interest);
    return 0;
    }
