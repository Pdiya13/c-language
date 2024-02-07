//sort array using double pointer

#include<stdio.h>

void arrsort(int **arr,int n);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int *ptr=a;
    arrsort(&ptr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ", *(ptr+i));
    }
}

void arrsort(int **arr,int n)
{
    int temp,x;
    for(int i=0;i<n;i++)
    {
        temp=*(*(arr)+i);
        for(int j=0;j<i+1;j++)
        {
            if(temp>=*(*(arr)+j))
            {
                x=temp;
                temp=*(*(arr)+j);
                *(*(arr)+j)=x;
            }
            if(temp<*(*(arr)+j))
            {
                *(*(arr)+i)=temp;
            }
        }
    }
}