#include<stdio.h>
int main(){
    int n,n1=0,n2=1,next,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    printf("Fibonacci series:\n");
    for(i=0;i<n;i++){

    if(i<=1){
     next=1;
    }else{
     next=n1+n2;
     n1=n2;
     n2=next;
    }
    printf("%d",next);
}
   printf("\n");
   return 0;
}