#include<stdio.h>
int main(){
    int n,i, sum=0;
    printf(" enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum of n natural number is %d:",sum,n );

}