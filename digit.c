#include<stdio.h>
int main (){
    int number,digit,largest;
    printf("Enter a number:");
    scanf("%d",&number);
    largest=-1;
    while(number!=0){
        digit=number%10;

        if(digit>largest){
            largest=digit;
            number/=10;
        }
        printf("\nThe largest digit in a numbers is:%d",largest);
        return 0;
    }
}