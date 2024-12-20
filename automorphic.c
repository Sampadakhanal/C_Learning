#include <stdio.h>
int automorphic (int num){
    int square = num*num;
    while(num>0){
        if (num%10!=square%10){
            return 0;
        }
        num/=10;
        square/=10;
    }
    return 1;
}
   int main (){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(automorphic(num)){
        printf("%d\n is an automorphic number:",num);
    }else{
        printf("%d\n is not automorphic number:",num);
    }
    return 0;
   }