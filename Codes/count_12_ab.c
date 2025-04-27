#include <stdio.h>
int main() {
    char str[1000];
    int alphabets = 0, digits = 0, special = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            alphabets++;
        else if (isdigit(str[i]))
            digits++;
        else if (str[i] != '\n')
            special++;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
