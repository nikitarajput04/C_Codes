#include <stdio.h>
int fib(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else if (a == 0)
    {
        return 0;
    }
    else
    {
        return  fib(a - 1) + fib(a - 2);
        
    }
    
}
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        printf("%d  ",fib(i));
    }
    return 0;
}