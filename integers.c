#include <stdio.h>
int main (){
    int number;
    printf("Enter a number");
    scanf("%d",&number);

    if (number>0){
        printf("\nThe number is positive");
    } else if (number<0){
        printf("\nThe number is negative ");
    } else {
        printf ("\nThe number is zero");

    }
    return 0;
}