#include <stdio.h>

int main() {
    int arr[100] = {42, 23, 24, 56, 78};
    int data;
    int n = 5;
    int found = 0;
    int index = -1;

    printf("Enter the element to search: ");
    scanf("%d", &data);

    for (int i = 0; i < n; i++) {
        if (arr[i] == data) {
            index = i;
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element is found at index %d\n", index);
    } else {
        printf("Element is not found\n");
    }

    return 0;
}
