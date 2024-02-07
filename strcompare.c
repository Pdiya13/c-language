#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100],ch;
    
    int i=0,k,l;
    do{
        ch=getchar();
        str1[i]=ch;
        i++;
    } while(ch !='\n');
    str1[i]='\0';
    int j=0;
    do{
        ch=getchar();
        str2[j]=ch;
        j++;
    } while(ch !='\n');
    str2[j]='\0';

    // puts(str1);
    // puts(str2);

    if(i==j){
        k=0;
        while(str1[k]!='\0' && str2[k]!='\0'){
            k++;
        }
        for(int x=0;x<k;x++){
            if(str1[x]==str2[x]){
                l=str1[x]-str2[x];
            }
            else if(str1[x]!=str2[x]){
                l=str1[x]-str2[x];
                break;
            }
        }
         if(l>0){
                    printf("str2 is alphabetically above");
                }
                else if(l<0){
                    printf("str1 is alphabetically above");
                }
                else if(l==0){
                    printf("Equal");
                }
    }

    else if(i!=j){
        k=0;
        while(str1[k]!='\0' && str2[k]!='\0'){
            k++;
        }

        for(int z=0;z<k;z++){
            if(str1[z]==str2[z]){
                continue;
            }
            else if(str1[z]!=str2[z]){
                l=str1[z]-str2[z];

                if(l>0){
                    printf("str1 is alphabetically above");
                }
                else{
                    printf("str2 is alphabetically above");
                }
            }
        }
    }
  
}