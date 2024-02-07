//find frequency of characters using pointers
#include<stdio.h>
#include<string.h>

void findfre(char *ptr,int n);

int main(){
    char str[1000];
    gets(str);
    int l=strlen(str);
    char *p=str;
    findfre(p,l);

}
void findfre(char *ptr,int n){
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
            if(*(ptr+i)!='\0')
            {
                for(int j=i+1;j<n;j++)
                {
                    if(*(ptr+i)==*(ptr+j))
                    {
                    *(ptr+j)='\0';
                    count++;
                    }
                }

                    printf("num= %c and f=%d\n", *(ptr+i),count+1);
            }
    }
}