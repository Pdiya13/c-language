//find max num in int array
#include<stdio.h>

int findmax(int *arr,int n);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int *ptr=arr;
    int m=findmax(ptr,n);
    printf("%d", m);

}

int findmax(int *arr,int n){
    int max=*(arr+0);
    for(int i=0;i<n;i++){
        if(max<*(arr+i)){
            max=*(arr+i);
        }
    }
    return max;
}
