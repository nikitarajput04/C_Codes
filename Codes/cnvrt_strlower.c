//Convert a string to lowercase without using string functions
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - ('A' - 'a');  
        }
    }

    printf("lowercase string: %s", str);

    return 0;
}
