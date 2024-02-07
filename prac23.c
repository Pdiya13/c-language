#include<stdio.h>

int main(){
    int n=100,count;

    for(int i=2;i<=n;i++){
        count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
            else if(i%j!=0){
                continue;
            }
        }
        if(count==0){
            printf("%d ", i);
         }
    }
}