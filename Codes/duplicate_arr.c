#include <stdio.h>

int main() {
    int arr[10], temp[10];
    int i, j, k = 0;
    int isDuplicate;

    printf("Enter 10 elements of the array:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++) {
        isDuplicate = 0;
        for(j = 0; j < k; j++) {
            if(arr[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            temp[k] = arr[i];
            k++;
        }
    }

    printf("Array after removing duplicate elements:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
