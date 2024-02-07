//pattern n=4
//    1
//   232
//  34543
// 4567654

#include<stdio.h>

int main(){
    int n,x,y=0;
    printf("Enter numebr");
    scanf("%d", &n);

    for(int r=1;r<=n;r++){
        for(int j=1;j<=n-r;j++){
            printf(" ");
        }
        x=r;
        y=r*2-1;
        for(int i=1;i<=(2*r-1);i++){
            if(i<=r){
                printf("%d", x);
                x++;
            }
             if(i>r){
                printf("%d", y-1);
                y--;
            }
        }
        printf("\n");
    }
}