#include<stdio.h>
#include<string.h>

int main(){
    char arr[15],ch;
    int value=0;
    gets(arr);
    int l=strlen(arr);
    int i=0;
    
    while(i<l){
        if(arr[i]=='M'){
            value+=1000;
        }
        else if(arr[i]=='D'){
            value+=500;
        }
        else if(arr[i]=='C'){
            if(arr[i+1]=='M'){
            value+=900;
            i++;
            }
            else if(arr[i+1]=='D'){
            value+=400;
            i++;
            }
            else{
            value+=100;
            }
        }
        else if(arr[i]=='X'){
        if(arr[i+1]=='L'){
        value+=40;
        i++;
        }
        if(arr[i+1]=='C'){
        value+=90;
        i++;
        }
        }
        else if(arr[i]=='L'){
        value+=50;
        }
        else if(arr[i]=='I'){
        if(arr[i+1]=='V'){
            value+=4;
            i++;
        }
        else if(arr[i+1]=='X'){
            value+=9;
            i++;
        }
        else{
            value+=1;
        }
        }
        else if(arr[i+1]=='V'){
            value+=5;
        }
        i++;
        
        }
        printf("%d", value);
}