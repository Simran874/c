#include<stdio.h>

int main(){

    int a,b,c,sum=0;
    printf("Enter the value of a,b and c: \n");
    scanf("%d%d%d",&a,&b,&c);

    float average;
    sum = a+b+c;
    average = sum/3;
    printf("Average of 3 numbers is %f" ,average);

    return 0;
}