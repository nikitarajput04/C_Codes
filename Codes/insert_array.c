#include<stdio.h>
int main(){
    int arr[100]={2,4,6,8,10};
    int size=5;
    int newPos=2;
    int newEle=7;
    for(int i=size-1;i>=newPos;i--){
        arr[i+1]=arr[i];
    }
    arr[newPos]=newEle;
    size++;
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}