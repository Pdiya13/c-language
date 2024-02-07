//sum of two numbers of any size 

#include<stdio.h>

int main(){
    int n1,n2,rem1,l1=0,l2=0;
    scanf("%d %d",&n1,&n2);
    int num1=n1,num2=n2;

    while(num1!=0){
        rem1=num1%10;
        num1=num1/10;
        l1++;
    }
    while(num2!=0){
        rem1=num2%10;
        num2=num2/10;
        l2++;
    }
    if(l1<l2){
        int y=l1;
        l1=l2;
        l2=y;
    }
    for(int i=1;i<=l1;i++){
        if(n1%10 + n2%10 < 10){
            printf("%d", (n1%10 + n2%10));
            n1=n1/10;
            n2=n2/10;
        }
        else if(n1%10 + n2%10 >= 10){
            int x=n1%10+n2%10;
            printf("%d", x%10);
            x=x/10;
            n1=n1/10;
            n2=n2/10;
            n2=n2+x;
        }
    }
}