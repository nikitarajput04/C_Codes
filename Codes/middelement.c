#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50,70};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    if (length == 0) {
        printf("Array is empty.\n");
        return 1;
    }

    int middleIndex = length / 2;

    if (length % 2 == 0) {
        printf("Array has even length, middle elements are: %d and %d\n", arr[middleIndex - 1], arr[middleIndex]);
    } else {
        printf("Middle element is: %d\n", arr[middleIndex]);
    }

    return 0;
}
