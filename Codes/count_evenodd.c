#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter size in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elemnt :\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
