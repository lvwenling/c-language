#include<stdio.h>
    int main (){
    int a,b,m,n,c,GCD;
    printf("Enter a fraction:");
    scanf("%d/%d",&m,&n);
    a=m;
    b=n;
    for (;a!=0;){
    c=b%a;
    b=a;
    a=c;
    } 
    GCD=b;
    printf("\nIn lowest terms: %d/%d",m/GCD,n/GCD);
    return 0;
}
