#include<stdio.h>
int main(){
    int number, reversed=0,remainder;

    printf(" Enter a number:");
    scanf("%d",&number);
    
    while (number!=0){
        remainder= number%10;
        reversed=reversed*10+remainder;
        number=number/10;
    }
    printf("\n Reversed number:");
    return 0;
}