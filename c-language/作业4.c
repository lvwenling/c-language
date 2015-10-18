#include<stdio.h>
int main(){
	int income;
	float tax;
	printf("Enter income:");
	scanf("%d",&income);
	if(income<=750)
	tax=income*0.01;
	else if(income<=2250)
	tax=7.50+(income-750)*0.02;
	else if(income<=3750)
	tax=37.50+(income-2250)*0.03;
	else if(income<=5250)
	tax=82.50+(income-3750)*0.04;
	else if(income<=7000)
	tax=142.50+(income-5250)*0.05;
	else 
	tax=230.00+(income-7000)*0.06;
	printf("\nThe tax is: $%.2f",tax);
	return 0;
}
