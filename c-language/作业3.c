#include<stdio.h>
int main (){
	int age,status;
	printf("Please input age:\n");
	scanf("%d",&age);
	if (age>59){
		printf("Please input status:");
		scanf("%d",&status);
		if(status==0)
		printf("\nRetired senior");
		else
		printf("\nWorking senior");
	}
	else{
		if(age>20)
		printf("\nAdult");
		else{
			if(age>12)
			printf("\nTeen");
			else
			printf("\nChild");
		}
	
	}
	
	return 0;
}

