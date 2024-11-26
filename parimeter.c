#include <stdio.h>

int main (){
    float l,b,p;
    printf("\n Enter length and breadth:");
    scanf("%f%f",&l,&b);
    p=2*(l+b);
    printf ("\n perimeter=%f",p);
    return 0;
}