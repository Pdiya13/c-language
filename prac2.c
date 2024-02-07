#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int r=1;r<=n;r++){
        if(r!=1){
        for(int i=n+1-r;i>=2;i--){
            printf(" ");
        }
        }
        if(r!=n && r!=1){
            printf("*");
            for(int j=1;j<=(2*r-1);j++){
                printf(" ");
            }
            printf("*");
        }
        else if(r==n){
            for(int i=1;i<=(2*n+1);i++){
                printf("*");
            }
        }
        if(r==1){
            for(int i=1;i<=n;i++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}