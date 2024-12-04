#include <stdio.h>
Int main (){

    int year;
    printf("Enter a year");
    scanf("%d",&year);

    if (year % 4==0){
    printf("\n The year %d is a leap year",year);
} else {
    printf("\n The year %d is not a leap year",year);
}
return 0;  
}