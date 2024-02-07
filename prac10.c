//sort pokamon 

#include<stdio.h>
#include<string.h>

typedef struct pokemon
{
    char name[50];
    int power;
    int hp;
}pkmn;

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    pkmn p[n],t;
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d",p[i].name,&p[i].power,&p[i].hp);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p[i].power<p[j].power){
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
            if(p[i].power==p[j].power){
                if(p[i].hp<p[j].hp){
            
                t=p[i];
                    p[i]=p[j];
                    p[j]=t;
            }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d\n",p[i].name,p[i].power,p[i].hp);
    }
    return 0;
}