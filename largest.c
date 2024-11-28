#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("\nEnter the second number:");
	scanf("%d",&b);
	if(a>b){
	printf("\nThe largest number is:%d",a);
}
else {
	printf("\nThe largest number is:%d",b);
}
return 0;
}