#include<stdio.h>

int main(){
    char str[]="123456789";
    int x,y;
    for(int row=1;row<=5;row++){
        x=row-1;
        for(int i=1;i<=5-row;i++){
            printf("  ");
        }
        for(int i=0;i<(2*row-1);i++){
            if(i<row){
            printf("%c ", str[x]);
            x++;
            }
            
            if(i==row){
            y=x-2;
            }
             if(i>=row){
                printf("%c ", str[y]);
                y--;
            }
        }
        printf("\n");
    }
}