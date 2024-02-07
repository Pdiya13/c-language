//pattern box 

#include<stdio.h>

int main(){
    int n,count,x;
    printf("enter number:");
    scanf("%d", &n);

    for(int r=1;r<=n;r++){
        count=0;
        if(r==1){
            for(int i=1;i<=(2*n-1);i++){
                printf("%d", n);
            }
        }
        else{
            for(int c=1;c<=(2*n-1);c++){
                if(c==1 || c==(2*n-1)){
                    printf("%d", n);
                }
                else{
                if(r==c && count==0){
                        count++;
                        for(int i=1;i<=(2*(n-r)+1);i++){
                            printf("%d", n-r+1);
                        }
                    }
                    else if(r!=c && count==0){
                        printf("%d", n-c+1);
                    }
                    else if(c>(2*(n-r)+r)){
                        printf("%d", c-n+1);
                    }
            }
            }
        }
        printf("\n");
    }
    
    for(int r=n-1;r>=1;r--){
        count=0,x=0;
        if(r==1 || r==(2*n-1)){
            for(int i=1;i<=(2*n-1);i++){
                printf("%d", n);
            }
        }
        else{
            for(int c=1;c<=(2*n-1);c++){
                if(c==1 || c==(2*n-1)){
                    printf("%d", n);
                }
                else{
                    if(r==c && count==0){
                        count++;
                        for(int i=1;i<=(2*(n-r)+1);i++){
                            printf("%d", n-r+1);
                            x++;
                        }
                    }
                    else if(r!=c && count==0){
                        printf("%d", n-c+1);
                    }
                    else if(c>(2*(n-r)+r)){
                        printf("%d", c-n+1);
                    }
                }
            }
        }
        printf("\n");
    }
}
