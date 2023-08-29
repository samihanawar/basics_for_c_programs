#include <stdio.h>
#include <stdbool.h>
int main()
    {
    int limit,i;
    printf("Enter value of limit:\n");
    scanf("%d",&limit);
    printf("Prime Number between 1 to %d are: ",limit);
    for(i=1;i<=limit; i++){
    bool isPrime = true;
    for(int j=2; j<i; j++){
      if(i%j == 0){
        isPrime = false;
        break;
      }
    }
    if(isPrime)
      printf("\n%d\n",i);
  }
  return 0;
}

/*#include<stdio.h>
main() {
    int i,flag,number;
    flag=0;
    printf("Enter the number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        for(i=2; i<number; i++)
        {    if (number%i==0)
            {
            flag=1;
            };
        }
        if (flag==0)
        {
        printf("\nThe number %d is prime", number);
        }
        else
        {
        printf("\nThe number %d is not prime\n", number);
        }
    }


}
*/

