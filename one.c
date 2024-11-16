#include <stdio.h>
int main ()
{  
    float p,t,r,i;
    printf("Enter principal,time and rate :\n");
    scanf("%f%f%f",&p,&t,&r);
    i=(p*t*r)/100;
    printf ("Interest=%f",i);
 return 0;   
}