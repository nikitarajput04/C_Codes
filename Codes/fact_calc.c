#include<stdio.h>
int main(){
    int n,i,fac=1;
    printf(" enter num ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    printf(" the factorial of %d is:%d",n,fac);

}