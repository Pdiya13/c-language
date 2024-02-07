#include<stdio.h>

int pal(char s[],int n,int m);

int main(){
    char str[200];
    scanf("%[^\n]s", str);
    int i=0,m=0;
    while(str[i]!='\0'){
        i++;
    }
    int n=i-1;
    pal(str,n,m);

}

int pal(char s[],int n,int m){
    if((n+1)%2!=0){
    if(n==m){
    printf("palindrome\n");
    return 0;
   }
   if(s[n]==s[m]){
    pal(s,n-1,m+1);
   }
   else if(s[n]!=s[m]){
    printf("not palindrome\n");
   }
    }

if((n+1)%2==0){
   if(n==m-1){
    printf("palindrome\n");
    return 0;
   }
   if(s[n]==s[m]){
    pal(s,n-1,m+1);
   }
   else if(s[n]!=s[m]){
    printf("not palindrome\n");
   }
}
}