#include<stdio.h>
void main()
{
    int i=8;
    int *j;
    j=&i;
    printf("%u \n",*j);
    printf("%u \n",j);
    printf("%d",*j);

}