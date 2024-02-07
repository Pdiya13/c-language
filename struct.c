#include<stdio.h>

struct date{
    int date;
    int month;
    int year;
};

struct date input(struct date d);
int validate(struct date d);
void printdate(struct date d);

int main(){
    struct date data=input(data);
    int valid=validate(data);
    if(valid==1){
        printdate(data);
    }

}

struct date input(struct date d){
    scanf("%d %d %d", &d.date, &d.month, &d.year);
    return(d);
}

int validate(struct date d){
    int count=0;
    if(d.month>=1 && d.month<=7){
        if(d.month==2){
            if(d.date<1 || d.date>28){
                printf("invalid data");
                return 0;
            }
            else{
                count++;
            }
        }
        else if(d.month%2==0){
            if(d.date<1 || d.date>30){
                printf("invalid data");
                return 0;
            }
            else{
                count++;
            }
        }
        else if(d.month%2==1){
            if(d.date<1 || d.date>31){
                printf("invalid data");
                return 0;
            }
            else{
                count++;
            }
        }
    }
    else if(d.month>=8 && d.month<=12){
        if(d.month%2==0){
            if(d.date<1 || d.date>31){
                printf("invalid data");
                return 0;
            }
            else{
                count++;
            }
        }
        else if(d.month%2==1){
            if(d.date<1 || d.date>30){
                printf("invalid data");
                return 0;
            }
            else{
                count++;
            }
        }
    }
    else{
        printf("Invalid data");
        return 0;
    }
    if(count==1){
        return(1);
    }
    else{
        return(0);
    }
}

void printdate(struct date d){
    int m=d.month;
    switch (m){
        case 1:
        printf("January ");
        break;
        case 2:
        printf("February ");
        break;
        case 3:
        printf("March ");
        break;
        case 4:
        printf("April ");
        break;
        case 5:
        printf("May ");
        break;
        case 6:
        printf("June ");
        break;
        case 7:
        printf("July ");
        break;
        case 8:
        printf("August ");
        break;
        case 9:
        printf("September ");
        break;
        case 10:
        printf("Octomber ");
        break;
        case 11:
        printf("November ");
        break;
        case 12:
        printf("December ");
        break;
    }
    printf("%d, %d", d.date, d.year);

}