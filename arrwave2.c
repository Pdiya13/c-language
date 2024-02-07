#include<stdio.h>        // 1 2 3 => 7 4 1 2 5 8 9 6 3 
                         // 4 5 6 
                         // 7 8 9
int main(){
    int n;
    printf("enter the length of array");
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int row=0;row<n;row++){
        if(row%2==0){
            for(int col=n-1;col>=0;col--){
                printf("%d ", arr[col][row]);
            }
        }
        else if(row%2!=0){
            for(int col=0;col<n;col++){
                printf("%d ", arr[col][row]);
            }
        }
    }
    return 0;
}