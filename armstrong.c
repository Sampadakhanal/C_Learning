#include<stdio.h>
int main (){
int num,originalnum,remainder,result=0,n=0;
printf("Enter an integer:");
scanf("%d",&num);
originalnum=num;
while(originalnum!=0){
    originalnum/=10;
    n++;
}
   originalnum=num;
   while(originalnum!=0){
    remainder=originalnum%10;
    result += pow(remainder,n);
    originalnum/=10;
   }
   if(result == num){
    printf("\n The number is armstrong:%d");
   }else{
    printf("\n The number is not armstrong:%d");
   }
   return 0;
}