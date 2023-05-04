#include<stdio.h>

int main(){

    int n,r,t,sum=0;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    t=n;

    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }

    if(t==sum){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }

    

    return 0;
}