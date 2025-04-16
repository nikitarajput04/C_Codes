#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {42, 23, 24, 56, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The second largest element is %d\n", second);
    }

    return 0;
}
