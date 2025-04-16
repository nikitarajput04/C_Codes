#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 1, 5, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];
    for (int i = 0; i < n; i++) {
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }

    printf("Element  \tFrequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d        \t%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
