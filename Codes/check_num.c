#include<stdio.h>
int main(){
    int num1;
    printf("enter number: ");
    scanf("%d",&num1);
    if(num1>0){
        printf("the number is positive ");
    }
    else if(num1<0){
        printf("the number is negative ");

    }
    else{
        printf("the number is zero ");
    }
    
}