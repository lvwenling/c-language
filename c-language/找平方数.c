#include<stdio.h>
int main(){
	int a,num;
	printf("Enter the upper bound: ");
	scanf("%d",&num);
	printf ("\n");
	for(a=1;4*a*a<=num;a++){
		printf("%d\n",4*a*a);
	}
	return 0;
}
