#include<stdio.h>

int main(){

    int n;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter numbers: \n");
   
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int sumeven =0 ;
    int sumodd=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sumeven =sumeven+arr[i];
        }
        if(arr[i]%2!=0){
            sumodd =sumodd+arr[i];
        }
    }
    printf("Sum of even number is : %d \n",sumeven);
    printf("Sum of odd number is : %d \n",sumodd);


    return 0;
}