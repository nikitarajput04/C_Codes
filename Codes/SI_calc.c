#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter the value of principle(p):\n ");
    scanf("%d",&p);

    printf("Enter the value of rate(r):\n ");
    scanf("%d",&r);

    printf("Enter the value of time(t): \n");
    scanf("%d",&t);
    int SI =p*r*t/100;
    printf(" the SI is %d",SI);


}