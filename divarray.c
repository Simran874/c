#include <stdio.h>

int main()
{

    int n, j = 0, i;
    printf("Enter the size of array : \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter numbers: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    printf("Enter the value : \n");
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        if (arr[i] % m == 0)
        {
            printf("arr[%d]=%d \n", i, arr[i]);
            j++;
        }
    }
    printf("Number is divisible by m : %d", j);

    return 0;
}