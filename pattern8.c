#include<stdio.h>
int main(){
    int n,x;
    printf("enter number:");
    scanf("%d", &n);

    for(int row=n;row>=1;row--){
        x=1;
        for(int i=1;i<=row;i++){
           
            printf("%d", x);
            printf(" ");
            x++;
        }
        if(row==n){
            printf("%d", x);
            printf(" ");
        }

        if(n != row){
            for(int j=1;j<=(n-row)*2+1;j++){
                printf("  ");
               
            }
        }
       
        x=x-1;
        for(int k=1;k<=row;k++){
            printf("%d", x);
            printf(" ");
            x--;
        }
        printf("\n");
    }
   

}