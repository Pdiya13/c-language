#include<stdio.h>
#include<string.h>

void strsort(char **pstr,int n);

int main(){
    int n;
    printf("enter n:");
    scanf("%d", &n);
    char str[n][200];
    for(int i=0;i<n;i++){
        gets(str[i]);
    }
    char *ptr=str[0];
    strsort(&ptr,n);
    
    for(int i=0;i<n;i++){
        printf("%s \n", *(ptr+i));
    }
}

void strsort(char **pstr,int n){
    char temp[200];
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(strcasecmp((*(pstr+j-1)),(*(pstr+j)))>0){
                strcpy(temp,*(pstr+j-1));
                strcpy(*(pstr+j-1),*(pstr+j));
                strcpy(*(pstr+j),temp);
            }
        }
    }
}
