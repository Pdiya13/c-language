//concatenation of four string
#include<stdio.h>
int main(){
   char str1[100],str2[100],str3[100],str4[100],ch;
    
    int i=0;
    do{
        ch=getchar();
        str1[i]=ch;
        i++;
    } while(ch !='\n');
    str1[i-1]='\0';
    int j=0;
    do{
        ch=getchar();
        str2[j]=ch;
        j++;
    } while(ch !='\n');
    str2[j-1]='\0';
    
    int x=0;
    do{
        ch=getchar();
        str3[x]=ch;
        x++;
    } while(ch !='\n');
    str3[x-1]='\0';

    int d=0;
    do{
        ch=getchar();
        str4[d]=ch;
        d++;
    } while(ch!='\n');
    str4[d-1]='\0';


    str1[i-1]=' ';
    int k;
    for(k=0;k<j;k++){
        str1[i+k]=str2[k];
    }

    str1[i+k-1]=' ';
    int y;
    for( y=0;y<k;y++){
        str1[i+k+y]=str3[y];
    }

    str1[i+k+y-1]=' ';
    for(int e=0;e<d;e++){
        str1[i+k+y+e]=str4[e];
    }
    puts("result is");
    puts(str1);
    
}