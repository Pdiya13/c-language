#include<stdio.h>

int main(){
    int n,x;
    printf("Enter number:");
    scanf("%d", &n);

    for(int row=1;row<=n;row++){
        
            for(int i=(n-row);i>=1;i--){
                printf(" ");
            }
            for(int j=1;j<=(2*row-1);j++){
                printf("*");
            }
            printf("\n");
            
    }
    for(int k=4;k>=1;k--){
        
        for(int l=n-k;l>=1;l--){
            printf(" ");
        }
        for(int m=2*k-1;m>=1;m--){
            printf("*");
        }
        printf("\n");
    }
        
}


