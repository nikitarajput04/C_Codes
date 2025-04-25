
#include <stdio.h>

int main() {
    int base, power;
    int result=1;
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (non-negative): ");
    scanf("%d", &power);
    for (int i = 0; i < power; i++) {
        result =result* base;
    }
    printf("%d^%d = %d\n", base, power, result);

    return 0;
}
