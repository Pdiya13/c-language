#include<stdio.h>
#include<string.h>

#define MAXCHAR 200

int main(){
    int n;
    printf("enter num of input:");
    scanf("%d", &n);
    getchar();

    char str[n][MAXCHAR],temp[MAXCHAR];

    for(int i=0;i<n;i++){
        gets(str[i]);
    }

    for(int j=0;j<n-1;j++){
        for(int k=1;k<n;k++){
            if(strcasecmp(str[k-1],str[k])>0){
                strcpy(temp,str[k-1]);
                strcpy(str[k-1],str[k]);
                strcpy(str[k],temp);
            }
        }
    }

    printf("************\n");
    for(int i=0;i<n;i++){
        printf("%s \n", str[i]);
    }
}