#include<stdio.h>
int main (){
	int a,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("\nThe reversal is: ");
	for(;;){
	printf ("%d",a%10);
	a=a/10;
	if(a==0)
	break;
	}
	return 0;
}
