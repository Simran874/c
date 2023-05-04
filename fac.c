#include <stdio.h>

int fac(int n);

int main()
{

    int n;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    printf("Factorial is : %d \n", fac(n));

    return 0;
}

int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int prefac = fac(n - 1);
    return n * prefac;
}