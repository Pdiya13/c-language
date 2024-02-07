//remove number of digits from 2nd string and copid rest of string2 to the 1st string

#include<stdio.h>

int main(){
    char str1[100],str2[200];
    char ch;
    int i=0;
    do{
        ch=getchar();
        str1[i]=ch;
        i++;
    } while(ch!='\n');
    str1[i-1]='\0';

    int j=0;
    do{
        ch=getchar();
        str2[j]=ch;
        j++;
    } while(ch!='\n');
    str2[j-1]='\0';

    int n;
    printf("enter the number of digits you want to delete from second string and then rest copied into 1st string:");
    scanf("%d", &n);

    int x;
    str1[i-1]=' ';
    for(x=0;x<j;x++){
        str1[i+x]=str2[x+n];
    }
    puts(str1);
}