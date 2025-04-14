#include<stdio.h>
int main(){
    int a;
     int arr[5];
    printf("enter mnumber of element of array:");
    
    for(int i=0;i<=5;i++){
        scanf("%d",&arr[i]);
 } 
 for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++)
    {
    if(arr[i]>arr[j]){
        a=arr[i];
        arr[i]=arr[j];
        arr[j]=a;
    }
}
 }
 printf(" the ascemding order of array is :");
 for(int i=0;i<5;i++)
{
    printf("%d\n",arr[i]);

}
}