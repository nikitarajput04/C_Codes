#include<stdio.h>
int main(){
    int x=2;
    int y=3;
    int t;
    printf("the value of x=%d\n",x);
    printf("the value of y=%d\n",y);
t=x;
x=y;
y=t;
printf(" after swapping the value of t is %d\n",t);
printf(" after swapping the value of x is %d\n",x);
printf(" after swapping the value of y is %d\n",y);

}