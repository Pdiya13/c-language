//given string is palindrom or not

#include<stdio.h>
int main(){
    char str[100],ch;
    int count;
    int i=0;
    do{
    ch=getchar();
    str[i]=ch;
    i++;
    } while(ch!='\n');
    
    int j=i-1;
    //printf("%d j ", j);
    str[i-1]='\0';
    count=i-2;
    i=0;
    if(j%2!=0){
    while(i<=count){
        if(str[i]==str[count]){
            if(i==count){
                printf("Palindrome");
            }
            i++;
            count--;
        }
        else if(str[i]!=str[count]){
            printf("Not palindrome");
            break;
        }
    }
    }
    int x=j/2;
    if(j%2==0){
        while(i<count){
        if(str[i]==str[count]){
            if(i==x-1 && count ==x){
                printf("Palindrome");
            }
            i++;
            count--;
        }
        else if(str[i]!=str[count]){
            printf("Not palindrome");
            break;
        }
    }
    }
}