#include <stdio.h>

int main() {
    char operation;
    int  num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}

// Additional code by if else method

// #include <stdio.h>

// int main()
// {
//     char operation;
//     int num1, num2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("Enter an operator (+, -, *, /): ");
//     scanf(" %c", &operation);

//     if (operation == '+')
//     {
//         printf("Result: %d\n", num1 + num2);
//     }
//     else if (operation == '-')
//     {
//         printf("Result: %d\n", num1 - num2);
//     }
//     else if (operation == '*')
//     {
//         printf("Result: %d\n", num1 * num2);
//     }
//     else if (operation == '*')
//     {
//         printf("Result: %d\n", num1 / num2);
//     }
//     else
//     {
//         printf("Error");
//     }

//     return 0;
// }
