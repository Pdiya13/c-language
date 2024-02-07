#include<stdio.h>

int main(){
    long int x,y,gcd,lcm;
    scanf("%ld", &x);
    scanf("%ld", &y);

    for(int i=1;i<x && i<y ;i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    lcm=(x*y)/gcd;
    printf("%ld", lcm);
}