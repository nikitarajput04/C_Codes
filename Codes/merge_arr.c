#include <stdio.h>

int main() {
    int arr1[5], arr2[5], mergearr[10];

    printf("Enter 5 elements of arr1:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
        mergearr[i] = arr1[i]; 
    }

    printf("Enter 5 elements of arr2:\n");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &arr2[j]);
        mergearr[j + 5] = arr2[j]; 
    }

    printf("Merged array is:\n");
    for (int k = 0; k < 10; k++) {
        printf("%d ", mergearr[k]);
    }

    return 0;
}
