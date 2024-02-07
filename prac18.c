#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    gets(str);
    int l=strlen(str);
    int count=0,max=1,idx;
    
    for(int i=0;i<l;i++){
        count=0;
        for(int j=0;j<=i;j++){
            for(int k=0;k<l;k++){
           if(str[j]!=str[k]){
            count++;
           }
           else if(str[j]==str[k]){
            break;
           }
        }
        if(max<count){
            max=count;
            idx=i;
        }
        }
    }

    printf("%d", max);
}