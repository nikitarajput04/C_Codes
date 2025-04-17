#include <stdio.h>

int main() {
    char a[100];
    int i = 0, word = 1;

    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0') {
        if (a[i] == ' ' && a[i+1] != ' ' && a[i+1] != '\0' && a[i+1] != '\n') {
            word++;
        }
        i++;
    }

    printf("\nTotal words = %d\n", word);
    return 0;
}
