//max number in one array element
#include<stdio.h>

int main(){
    int num[10]={11,22,33,44,55,66,77,88,99,1};
    int max = num[0];
    for(int i=0;i<10;i++){
        int count =0;
        for(int j=0;j<=9;j++){
            if(num[i]>=num[j]){
                count++;
                if(count == 10){
                    printf("%d is the lagrest number\n", num[i]);
                }
            }
            else{
                break;;
            }
        } 
    }
    for(int i=0;i<10;i++){
        if(max<num[i]){
            max=num[i];
        }
        else {
            continue;
        }
    }
    printf("%d is the largest number", max);

}