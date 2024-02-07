#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int r=1;r<=n;r++){
        for(int i=1;i<=n-r;i++){
            printf(" ");
        }
        if(r==1){
            printf("*");
        }
        else{
            printf("*");
            for(int j=1;j<=(2*r-3);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for(int r1=n-1;r1>=1;r1--){
        for(int i=1;i<=n-r1;i++){
            printf(" ");
        }
        if(r1==1){
            printf("*");
        }
        else{
            printf("*");
            for(int j=1;j<=(2*r1-3);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}