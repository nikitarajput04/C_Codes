#include<stdio.h>
int main(){
    int x,y;
    printf(" enter two number:");
    scanf("%d %d",&x,&y);
    if(x>y){
         printf("the  largest number is %d\n", x);

    }
    else{
        printf("the  largest number is %d", y);

    }
    return 0;
}