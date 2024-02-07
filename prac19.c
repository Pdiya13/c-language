#include<stdio.h>

int main(){
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);

    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
    }
    for(int j=0;j<n2;j++){
        scanf("%d", &arr2[j]);
    }
    
    if(n1<=n2){
       for(int i=n1;i<n2;i++){
        arr1[i]=0;
       }
       for(int i=0;i<n2;i++){
        arr1[i]+=arr2[i];
    }
    }
    if(n2<n1){
       for(int i=n2;i<n1;i++){
        arr2[i]=0;
       }
       for(int i=0;i<n1;i++){
        arr1[i]+=arr2[i];
    }
    }
    if(n1<n2){
        int x=n1;
        n1=n2;
        n2=x;
    }

    printf("addition of two array is:");
    for(int i=0;i<n1;i++){
        printf("%d", arr1[i]);
        
    }
    printf("\n");
   
    for(int i=0;i<n1;i++){
        for(int j=0;j<i+1;j++){
            if(arr1[i]<arr1[j]){
                int x=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=x;
            }
        }
    }
    printf("Sorted array is:");
    for(int i=0;i<n1;i++){
        printf("%d ", arr1[i]);
    }

    if(n1%2!=0){
        int x=(n1+1)/2;
        printf("mean is %d", arr1[x-1]);
    }
    if(n1%2==0){
        int x=((n1/2)+(n1/2)+1)/2;
        printf("mean is %d", arr1[x-1]);
    }
}


