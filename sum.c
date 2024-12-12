#include<stdio.h>
int main (){
    int number,sum=0,digit;
    printf("Enter a number:");
    scanf("%d",&number);
    while(number!=0)
    {
        number=number%10;
        sum+=digit;
        number=number/10;
    }
      printf("\n Sum of digits:%d",sum);
      return 0;
    }