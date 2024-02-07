#include<stdio.h>

//without use of function and recursion
int main(){
    int n,rem,sum=0;
    scanf("%d", &n);
    

    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum*10+rem;
    }
    printf("%d", sum);

}

//with use of recursion and without declaring array

// int fun(int n);

// int main(){
//     int n;
//     scanf("%d", &n);
//     fun(n);
// }

// int fun(int n){
//     if(n/10==0){
//         printf("%d", n);
//         return 0;
//     }
//     printf("%d", n%10);
//     fun(n/10);
// }


// // with use of recursion and declaring array

// int reverse(int a[],int l);

// int main(){
//     int n;
//     printf("Enter length of array:");
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     reverse(arr,n-1);
//     return 0;
// }

// int reverse(int a[],int l){
//     if(l==0){
//         printf("%d", a[l]);
//         return 0;
//     }
//     printf("%d", a[l]);
//     reverse(a,l-1);
    
    
// }