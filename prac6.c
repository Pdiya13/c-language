#include<stdio.h>
#include<string.h>

int main(){
    int n,count,max=0;
    char temp[200];
    printf("enter length of array:");
    scanf("%d", &n);
    char str[n][200];
    for(int i=0;i<n;i++){
        scanf("%s", str[i]);
    }
    int x=0;
        while(str[0][x]!='\0'){
            temp[x]=str[0][x];
            x++;
        }
        for(int j=1;j<n;j++){
            count=0;
            for(int k=0;str[k]!='\0';k++){
                if(temp[k]==str[j][k]){
                    count++;
                }
                else if(temp[k]!=str[j][k]){
                    break;
                }
            }
            if(count>max){
                max=count;
            }
        }

         printf("max is %d\n", max);

         for(int l=0;l<max;l++){
            printf("%c", temp[l]);
        }  
}