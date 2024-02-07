//find frequncy of numbers in array
#include<stdio.h>

int main(){
    int n;
    int temp,count,c=0;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int x=0;x<n;x++){
        if(arr[x]==0){
            c++;
        }
    }
    if(c>0){
        printf("num=0 and f=%d \n", c);
    }


    for(int j=0;j<n;j++){
        count=0;
        temp=arr[j];
        if(temp!='\0'){
        for(int k=j+1;k<n;k++){
            if(temp==arr[k]){
                arr[k]='\0';
                count++;
            }
        }
        printf("num= %d and f=%d\n", arr[j],count+1);
        }
    }
}