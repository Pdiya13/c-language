#include<stdio.h>
int main(){
    int rem;
    int count;
    int max=0;
    int idx;
    int n;
    printf("enter number");
    scanf("%d", &n);

    int arr[n];
    arr[n]={0};
   
    int m;
    printf("enter number");
    scanf("%d", &m);
    int brr[m];
    for(int i=0;i<m;i++){
        scanf("%d", &brr[i]);
    }

    for(int j=0;j<m;j++){
        rem=brr[j];
        count=0;
        if(arr[rem]>=0){
            arr[rem]+=1;
            count=arr[rem];
            if(count>max){
                count = max;
                idx=j;
            }
        }
       // printf("%d", brr[idx]);
    }
   printf("abc is %d", brr[idx]);
    
}