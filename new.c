#include<stdio.h>

int main(){
   int n;
   printf("enter the number:");
   int odd=0,even=0;

   do {
    scanf("%d", &n);

    if(n%2==0){
        even++;
    }
    if(n%2!=0){
        if(n<20){
            odd++;
        }
        else{
            odd++;
            break;
        }
    } 
   
   } while(1);
    printf("%d %d", odd, even);
}