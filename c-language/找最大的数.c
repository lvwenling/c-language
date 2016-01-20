#include<stdio.h>
int main(){
	float a,b,max;
	printf("Enter a number: ");
		scanf("%g",&a);
		max=a;
		
	for(;;){
	     if (a<=0)
		 break;
		printf("\nEnter a number: ");
		scanf("%g",&b);
		if (b>max)
		max=b;
		
		if (b<=0)
		break;
		printf("\nEnter a number: ");
		scanf("%g",&a);
		if (a>max)
		max = a; 
	}printf("\nThe largest number entered was %g",max);
	return 0;
} 
