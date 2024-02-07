#include<stdio.h>

int main(){
    int x;
    int n;
    printf("enter number:");
    scanf("%d", &n);

    for (int row=1;row<=n;row++){
         x=65;
        for(int j=1;j<=((2*n)-(2*row-1));j++){
            printf(" ");
        }
        for(int k=1;k<=row;k++){
            printf("%c", x);
           x++;
           for(int i=1;i<=1;i++){
            printf(" ");
           }
        }
        x=x-2;
        for(int l=1;l<=row-1;l++){
            printf("%c", x);
            x--;
            for(int i=1;i<=1;i++){
                printf(" ");
            }
        }
       printf("\n");
    }
    return 0;
}