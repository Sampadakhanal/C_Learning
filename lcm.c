#include<stdio.h>
int main (){
    int lcm,max,num1,num2;
    printf("Enter the two positive numbers:");
    scanf("%d%d",&num1,&num2);

    max=(num1>num2) ? num1:num2;
    while(1){
    if(max % num1 == 0 && max % num2 == 0){
        lcm=max;
        break;
    } 
    max++;
}
    printf("The lcm of %d and %d is %d\n",num1,num2,lcm);
    return 0;
}