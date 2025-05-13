#include <stdio.h>
int main() {
    int n;
    printf("enter n :");
    scanf("%d", &n);

    int len = n * 2 - 1;
    int a[len][len];

    int start = 0;
    int end = len - 1;
    int current = n;

    while (current > 0) {
        for (int i = start; i <= end; i++) {
            for (int j = start; j <= end; j++) {
                if (i == start || i == end || j == start || j == end) {
                    a[i][j] = current;
                }
            }
        }
        start++;
        end--;
        current--;
    }
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
