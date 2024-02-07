#include<stdio.h>

int main(){
    int x;
    int n;
    printf("enter number:");
    scanf("%d", &n);

    for (int row=1;row<=n;row++){
         x=65;
        for(int j=1;j<=(n-row);j++){
            printf(" ");
        }
        for(int k=1;k<=row;k++){
            printf("%c", x);
           x++;
        }
        x=x-2;
        for(int l=1;l<=row-1;l++){
            printf("%c", x);
            x--;
        }
       printf("\n");
    }
    return 0;
}