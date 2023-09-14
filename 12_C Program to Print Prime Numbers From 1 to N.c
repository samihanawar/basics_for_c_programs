#include<stdio.h>
main() {
    int i,flag,number;
    flag=0;
    printf("Enter the number:");
    scanf("%d",&number);
    for(i=2; i<number; i++)
    {   if (number%i==0)

        {
            flag=1;
        };
    }


    if (flag==0)
    {
        printf("\nThe number %d is prime\n", number);
    }
    else {
        printf("\nThe number %d is not prime\n", number);
    }



}



