//remove duplicate in string
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    gets(a);
    //puts(a);
    printf("%d\n",strlen(a));

    for(int i=0;i<strlen(a);i++)
    {
        for(int j=i+1;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                a[j]=11;
            }
        }

    }
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!=11)
        printf("%c",a[i]);
    }
}