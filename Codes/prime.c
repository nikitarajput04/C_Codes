#include <stdio.h>
int main()
{
    int x;
    printf("enter the number ");
    scanf("%d", &x);
    if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0)
    {
        printf("the number is not prime");
    }
    else
    {
        printf("the number is prime");
    }
    return 0;
}