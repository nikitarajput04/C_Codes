#include<stdio.h>
int main(){
    int arr[100]={2,4,6,8,10};
    int size=5;  
    int delEle=6;
    int pos=-1;
    for(int i=0;i<size;i++){
        if(arr[i]=delEle){
            pos=i;
            break;
        }
        
    }
    if(pos!=-1){
        for(int i=pos;i<size-1;i++){
            arr[i]=arr[i+1];
        }size--;
        printf("Array after deleting %d:\n", delEle);
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Element %d not found in the array.", delEle);
    }

    return 0;
}
    