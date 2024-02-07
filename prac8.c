//find frequency of characters in string

#include<stdio.h>

int main(){
    int n;
    int temp,count,c=0;
    printf("Enter n:");
    scanf("%d", &n);

    char arr[n+1];
    scanf("%s", arr);

    for(int j=0;j<n+1;j++){
        count=0;
        temp=arr[j];
        if(temp!='\0'){
        for(int k=j+1;k<n+1;k++){
            if(temp==arr[k]){
                arr[k]='\0';
                count++;
            }
        }
        printf("num= %c and f=%d\n", arr[j],count+1);
        }
    }
}

