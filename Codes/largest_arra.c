#include<stdio.h>
int main(){
    int n;
     int arr[100];
    printf("enter mnumber of element of array:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
printf("entr the num %d :",i+1);
    scanf("%d",&arr[i]);
 } 
 for(int i=1;i<=n;i++){
    if(arr[0]<arr[i]){
        arr[0]=arr[i];
    }
 }
  printf("the largest element is=%d",arr[0]);  
}