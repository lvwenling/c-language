#include<stdio.h>
int main(){
    int m,n,a;
    printf("Enter two integers:\n");
    scanf("%d %d",&m,&n);
    for (m,n;n!=0;a=m%n,m=n,n=a){
    }
    printf("Greatest common divisor: %d",m);
    return 0;
}
    
