#include<stdio.h>
int main (){
    int number,even,odd,i;
    printf("Enter a number:");
    scanf("%d",&number);
    
    for(i=1;i<=100;i++){

    if(i%2==0){
        even+=i;
    }else{
        odd+=i;
    } 
    printf("\nSum of even numbers from 1 to 100:%d",even);
    printf("\nSum of odd numbers from 1 to 100:%d",odd);
    }
    return 0;
}