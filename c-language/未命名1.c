#include <stdio.h>
void go_south_east (int *a,int *b)
{
	*a=*a-1;
	*b=*b+1;
}
int main(){
	int lat=32,lon=-64;
	
	go_south_east (&lat,&lon);
	printf("Õ££°µ±«∞Œª÷√£∫[%i,%i]\n",lat,lon);
	return 0;
	
	
}
