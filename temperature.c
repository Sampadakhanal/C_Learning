#include <stdio.h>
int main (){

    int fahrenheit,celsius;
    printf("Enter the temperature in celsius:");
    scanf("%d",&celsius);
    fahrenheit=celsius*9/5+32;
    printf("\n The temperature in fahrenheit",fahrenheit);

    return 0;
}