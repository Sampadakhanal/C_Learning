#include<stdio.h>
int main (){
    int i,j,prime;

    for(i=1;i<=50;i++){
        prime=1;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            prime=0;
            break;
        }
    }
    if(prime){
        printf("%d\n",i);
    }
     return 0;
    }
}