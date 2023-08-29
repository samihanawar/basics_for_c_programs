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



