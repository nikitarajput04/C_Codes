#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[1000];
    int i, uppercase = 0, lowercase = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            uppercase++;
        } else if (islower(str[i])) {
            lowercase++;
        }
    }

    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);

    return 0;
}
