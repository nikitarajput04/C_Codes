#include<stdio.h>
int main(){
    int n;
    printf("enter an integer :");
    scanf("%d",&n);
    int reverse=0;
    while(n!=0){
        int remain=n%10;
         reverse=reverse*10+remain;
         n/=10;
    }
    printf("%d",reverse);
    return 0;
}