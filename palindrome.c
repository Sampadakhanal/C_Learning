#include<stdio.h>
int main (){
    int number,remainder,original,reversed=0;
    printf("Enter a number:");
    scanf("%d",&number);
    original=number;
    while(number=0)
    {
        remainder=number%10;
        reversed=reversed*10+remainder;
        number=number/10;
    }
    if(original==reversed){
        printf("\nThe number is a palindrome:");
    }
    else
    {
        printf("\n The number is not a palindrome:");
    }
    return 0;
}