#include <stdio.h>

int fib(int n);

int main()
{

    int n;
    printf("Enter tne value of n: \n");
    scanf("%d", &n);

    int i;
    for (int i = 0; i < n; i++)
    {
        printf("%d", fib(i));
        printf("\n");
    }

    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}