#include<stdio.h>
int main(){
    int n;
    int m;
    printf("enter number of rows :");
    scanf("%d",&n);
    printf("enter number of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
}