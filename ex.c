#include<stdio.h>
int main(){
    int n,temp,flag;
    printf("enter the length of array:");
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n;i++){
        temp=arr[i];
        for(int j=0;j<=i;j++){
            if(temp<arr[j]){
                flag=temp;
                temp=arr[j];
                arr[j]=flag;
            }
            else if(temp>=arr[j]){
                arr[i]=temp;
            }
        }
    }

    printf("------sorted array is : ------");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    int x;
    printf("enter the elemrnt to be inserted:");
    scanf("%d", &x);

    for(int i=0;i<n;i++){
        if(arr[i]>x){
            for(int j=n;j>=i;j--){
                arr[j]=arr[j-1];
            }
            arr[i]=x;
            break;
        }
        else{
            arr[n]=x;
        }
    }

    for(int i=0;i<n+1;i++){
        printf("%d ", arr[i]);
    }
}