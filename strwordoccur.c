//occurness of each alphabet in word

#include<stdio.h>
#include<string.h>

int main(){
    char str[100],str1[100];
    gets(str);
    int l,count,temp;
    l=strlen(str);
    strcpy(str1,str);

    for(int i=0;i<l;i++){
        count=0;
        if(str[i]!='\0'){
        temp=str[i];
        
        for(int j=i+1;j<=l;j++){
            if(temp==str[j]){
                str[j]='\0';
                count++;
            }
        }
        printf("%c is occur %d time \n",str[i], count+1);
        }
    }
    puts(str);
    puts(str1);  
}