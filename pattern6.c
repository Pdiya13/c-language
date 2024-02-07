#include<stdio.h>

int main(){
    int n,x;
    printf("enter number:");
    scanf("%d", &n);

    for(int row=1;row<=n; row++){
        x=1;
        for(int i=1; i<=((2*n)-(2*row-1));i++){
            printf(" ");
        }
        for(int j=1;j<=row; j++){
            printf("%d", x);
            x++;
            for(int i=1;i<=1;i++){
                printf(" ");
            }
        }
        x=x-2;
        for(int k=1;k<=row-1; k++){
            
            printf("%d", x);
            x--;
            for(int i=1; i<=1;i++){
                printf(" ");
            }
        }
        printf("\n");
    }
}