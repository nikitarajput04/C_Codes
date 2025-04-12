#include<stdio.h>
int main(){
    int n,s=0,r,c;
    printf("enter number:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        s=r+(s*10);
        n/=10;
    }
    if(c==s){
        printf("number is palindrome");
     } else{
        printf("not palindrome");
    }
    return 0;
}