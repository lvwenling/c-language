#include<stdio.h>
int main(){
	int a,b,c,n;
    n=100;
    a=n/100;
    b=(n-a*100)/10;
    c=n-a*100-b*10;
    for(;;){
    if(a*a*a+b*b*b+c*c*c==n){
    printf("%d    ",n);}
    n++;
    a=n/100;
    b=(n-a*100)/10;
    c=n-a*100-b*10;
    if(n>999)
    break;
        }
    return 0;
    } 
