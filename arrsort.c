#include<stdio.h>
int main(){
    float temp,x;
    int n;
    printf("Enter n");
    scanf("%d", &n);
    float arr[n];
    for(int i=0;i<n;i++){
    scanf("%f", &arr[i]);
    }

    for(int i=0;i<n;i++){
        temp=arr[i];
        for(int j=0;j<i+1;j++){
            if(temp>=arr[j]){
                arr[i]=temp;
            }

            if(temp<arr[j]){
                x=temp;
                temp=arr[j];
                arr[j]=x;
            }
        }
    }
    for(int k=0;k<n;k++){
        printf("%.3f ", arr[k]);
    }
}