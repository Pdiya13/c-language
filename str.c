#include<stdio.h>

int main(){
    // char str[]={'d','i','y','a','\0'};
    char str[5];
    //  scanf("%[^\n]s", &str);
    fgets(str,11,stdin);
    puts(str);
    // int count=0;
    // for(int i=0; str[i]!='\0';i++){
    //     printf("%c", str[i]);
    //     count++;
    // }
    // printf("\n");        // reverse string
    // for(int i=count;i>=0;i--){
    //     printf("%c", str[i]);
    // }
}