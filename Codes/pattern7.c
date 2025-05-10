 #include <stdio.h>
int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
        
            char ch = 'A';
            for(int j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        } else {
        
            for(int k = 1; k <= i; k++) {
                printf("%d ", k);
            }
        }
        printf("\n");
    }

    return 0;
}
