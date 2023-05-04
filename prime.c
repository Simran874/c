#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    int flag = 0;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("NON PRIME Number");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("PRIME Number");
    }

    return 0;
}