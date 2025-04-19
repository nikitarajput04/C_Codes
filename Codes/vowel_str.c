#include <stdio.h>

int main() {
    char a[100];
    int i = 0, vowel = 0;

    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0') {
        char ch = a[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;
        }
        i++;
    }

    printf("\nTotal vowel = %d\n", vowel);
    return 0;
}
