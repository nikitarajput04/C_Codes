#include<stdio.h>
int main(){
    int n1,n2;
    int gdc=1, lcm;
    printf("enter two number");
    scanf("%d %d",&n1,&n2);
    for(int i=1;i<=n1&&i<=n2;i++){
        if(n1%i==0 && n2%i==0)
            gdc=i;  
    }
    lcm=(n1*n2)/gdc;
    printf("gdc of %d & %d is :%d",n1,n2,lcm);
    return 0;
}