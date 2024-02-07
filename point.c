#include<stdio.h>
#include<string.h>


#define STUDENT 3
#define SUBJECT 3

typedef struct student{
    char str[STUDENT][20];
    int arr[STUDENT][SUBJECT];
    int total[STUDENT];
}student;

student getinput(student l);
student findtotal(student l);
student sortlist(student l);

int main(){
    student list=getinput(list);
    // printf("Input is:\n");
    // for(int i=0;i<STUDENT;i++){
    //     printf("%s", list.str[i]);
    //     for(int j=0;j<SUBJECT;j++){
    //         printf("%d", list.arr[i][j]);
    //     }
    // }
    list=findtotal(list);
    // for(int i=0;i<STUDENT;i++){ 
    //        printf("Total of studet%d is %d \n", i+1, list.total[i]);
        
    // }
    list=sortlist(list);
    printf("sorted list according to total is:\n");
    for(int i=0;i<STUDENT;i++){
        printf("Name is %s: ", list.str[i]);
        for(int j=0;j<SUBJECT;j++){
            printf("%d ", list.arr[i][j]);
        }
    }


}

student getinput(student l){
    for(int i=0;i<STUDENT;i++){
        scanf("%s", l.str[i]);
        for(int j=0;j<SUBJECT;j++){
            scanf("%d", &l.arr[i][j]);
        }
    }

    return(l);
}

student findtotal(student l){
    for(int i=0;i<STUDENT;i++){
        l.total[i]=0;
        for(int j=0;j<SUBJECT;j++){
            l.total[i]+=l.arr[i][j];
        }
    }
    return(l);
}

student sortlist(student l){
    for(int i=1;i<STUDENT;i++){
        for(int j=1;j<STUDENT;j++){
            if(l.total[j-1]>=l.total[j]){
                int temp=l.total[j];
                l.total[j]=l.total[j-1];
                l.total[j-1]=temp;

               char tempstr[20];
               strcpy(tempstr,l.str[j]);
               strcpy(l.str[j],l.str[j-1]);
               strcpy(l.str[j-1],tempstr);

               
               for(int i=0;i<STUDENT;i++){
                for(int j=0;j<SUBJECT;j++){
                    int x=l.arr[i][j-1];
                    l.arr[i][j-1]=l.arr[i][j];
                    l.arr[i][j]=x;
               }
               }
            }
        }
    }
    return(l);
}