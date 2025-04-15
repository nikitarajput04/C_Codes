#include<stdio.h>
int main(){
    
     int arr[5];
    printf("enter number of element of array:");
    for(int i=0;i<=4;i++){
            scanf("%d",&arr[i]);
         } 
         printf("reversed digit of the number is :\n");
         for(int i=4;i>=0;i--){
            
            printf("%d ",arr[i]);
        }
    }