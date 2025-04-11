#include<stdio.h>
int main(){
    int x;
    int y;

    printf("the value of x=");
    scanf("%d",&x);
    printf("the value of y=");
    scanf("%d",&y);

x=x+y;
y=x-y;
x=x-y;

printf(" after swapping the value of x is %d\n",x);
printf(" after swapping the value of y is %d\n",y);
}