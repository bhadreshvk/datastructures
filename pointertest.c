#include<stdio.h>
#include<conio.h>
int main(){
    int a=5;
    int *b=&a;
    int c=*b;
    printf("%u %d",b,c);
    getch();
}