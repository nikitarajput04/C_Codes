#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int cube=i*i*i;
       
        printf("cube of %d is:%d \n",i,cube);
    }
return 0;
     }
    