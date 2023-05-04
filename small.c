#include<stdio.h>

int main(){

    int a,b;
    printf("Enter the value of a,b : \n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("Smallest Number is %d",b);
    }
    else{
        printf("Smallest Number is %d",a);
    }

    return 0;
}