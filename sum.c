#include<stdio.h>
int main (){
    int number,sum=0,digit;
    Printf("Enter a number:");
    scanf("%d",&number);
    while(number!=0)
    {
        number=number%10;
        sum+=digit;
        number=number/10;
    }
      printf("\n Sum of digits",Sum);
      return 0;
    }