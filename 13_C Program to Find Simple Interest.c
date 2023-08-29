#include<stdio.h>
int main()
{
    float principal,rate,time,interest;
    printf("Enter the Principal:");
    scanf("%f",&principal);
    printf("\nEnter the Rate:");
    scanf("%f",&rate);
    printf("\nEnter the Time:");
    scanf("%f",&time);
    interest=principal*rate*time/100;
    printf("\nSimple interest is : %f\n",interest);
}
