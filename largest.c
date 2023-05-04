#include<stdio.h>

int main(){
    
    int temp=0;
    int arr[10];
    printf("Enter the numbers : \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    int second_largest=arr[1];

    if(largest<second_largest){
        temp=largest;
        largest=second_largest;
        second_largest=temp;

    }

    for(int i=2;i<10;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest&&arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    printf("Largest number is : %d \n",largest);
    printf("Second largest number is : %d",second_largest);

    return 0;
}