//remove duplicate in int array
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int count=0,temp;
    for(int i=0;i<n;i++){
        if(arr[i]!='\0'){
        temp=arr[i];
        }
     
        for(int j=i+1;j<n;j++){
            if(temp==arr[j]){
                arr[j]='\0';
                count++;
            }
        
        }
    }

    // for(int i=0;i<n;i++){
    //     printf("%d", arr[i]);
    // }
    

    int arr1[n-count];
    int j=0;
    for(int i=0;i<n-count;i++){
        if(arr[j]!='\0'){
            arr1[i]=arr[j];
            j++;
        }
    }

    for(int i=0;i<n-count;i++){
        printf("%d ", arr1[i]);
    }

    printf("Size= %d", n-count);
} 