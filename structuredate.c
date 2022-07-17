#include<stdio.h>
#include<string.h>
struct date{
     int day;
     int month;
     int year;};
int main(){
    struct date d1,d2;
    d1.day=01;
    d1.month=07;
    d1.year=2020;
    d2.day=08;
    d2.month=06;
    d2.year=2012;
    int  d=comparedate(d1,d2);
    printf("%d",d);}

    int comparedate(struct date a,struct date b){
        if(a.year>b.year){
            return 1;
        }
        if(b.year>a.year){
            return -1;
        }
        if(a.month>b.month){
            return 1;
        }
        if(b.month>a.month){
            return -1;
        }
        if(a.day>b.day){
            return 1;
        }
        if(b.day>a.day){
            return -1;
        }
        else{
            return 0;
        }
    }