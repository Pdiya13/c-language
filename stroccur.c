#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    gets(str);
    int l,temp,idx,max=1,count=0;
    l=strlen(str);
    printf("length of string is %d\n", l);
    puts(str);

    for(int i=0;i<l;i++){
        count=0;
        temp=str[i];
        for(int j=0;j<l;j++){
            if(temp==str[j]){
                count++;
            }
            if(count>max){
                max=count;
                idx=i;
            }
        }
    }

    if(max!=1){
 
       printf("%c is max occur %d times", str[idx], max);
       }
       else {
        printf("NO leeter occures more than once:");
       }
}