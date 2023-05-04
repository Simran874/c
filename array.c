#include<stdio.h>

int main(){

    int n,m;
    printf("Enter the value : \n");
    scanf("%d%d",&n,&m);

    int arr[n][m];
    printf("Numbers are : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("arr[%d][%d]=%d \n",i,j,arr[i][j]);
        }
    }

    return 0;
}