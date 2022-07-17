#include<stdio.h>
int main()
{
    int a[5];
    a[0]=5;
    a[1]=6;
    a[2]=3;
    int *b,*c;
    b=&a[0];
    
    c=&a[1];
    printf("%u %u",b,c);
    printf("\n %d %d",*b,*c);
    printf("\n %u",c-b);
}