#include<stdio.h>

float temp(int n);

int main(){

    int n;
    printf("Enter the temperature in Celsius : \n");
    scanf("%d",&n);

    printf("Temparature is : %f",temp(n));


    return 0;
}

float temp(int n){
    if(temp>25){
        printf("HOT");
    }
    else if (temp<25){
        printf("COLD");
    }
    else{
        printf("ROOM TEMPRATURE");
    }
    return n;
}