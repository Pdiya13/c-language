#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    gets(str);
    int n=strlen(str);
    int count=0;
    char *ptr=str;
    for(int i=0,j=n-1;i<n/2,j>n/2;i++,j--)
    {
         if((ptr+i)==(ptr+j))
         {
             count++;
         }   
    }
    
    if(count==n/2)
    {
         printf("Given String is Palindrome");   
    }
    else
    {
        printf("Given String is not Palindrome");
    }
    
    return 0;
}