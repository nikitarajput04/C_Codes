#include<stdio.h>
int main(){
    int a[10];
    int size,even_sum=0,odd_sum=0;
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter the element  of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            even_sum=even_sum +a[i];
        }else{
            odd_sum=odd_sum+a[i];
        }
    }
printf("\n the sum of even number in this array=%d",even_sum);
printf("\n the sum of odd number in this array=%d",odd_sum);
return 0;
}