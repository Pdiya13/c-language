#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int row=n;row>=1;row--){
        
            for(int i=(n-row);i>=1;i--){
                printf(" ");
            }
            for(int j=1;j<=(2*row-1);j++){
                printf("*");
            }
            printf("\n");
            
    }

  
    return 0;
}

