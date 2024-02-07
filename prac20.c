#include<stdio.h>

int main(){
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);
    int arr1[n1+n2],arr2[n2];
    for(int i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
    }
    for(int j=0;j<n2;j++){
        scanf("%d", &arr2[j]);
    }
    int x=0;
    for(int j=n1;j<n2;j++){
        arr1[j]=arr2[x];
        x++;
    }
    for(int x=0;x<n1+n2;x++){
        printf("%d ", arr1[x]);
    }
    
}