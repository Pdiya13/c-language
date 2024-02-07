#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;    
    scanf("%d", &n);
    
    int rem;
    float cube=0;
    int m=n;
    int p=n;
    int count=0;
    int x;
    

    while(n!=0){
        n=n/10;
        count++;
    }
    while(m!=0){
         rem=m%10;
         m=m/10;
         x=pow(rem,count);

        cube=cube+x;
        }
    
        if(cube==p){
        printf("1\n");
        }
    else{
        printf("0\n");
        scanf("%d", &n);
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
