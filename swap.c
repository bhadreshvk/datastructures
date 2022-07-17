#include<stdio.h>
int main()
    {
        int a,b;
        a=4;b=6;
        printf("Value of a =%d & value of b=%d \n",a,b);
        swap(&a,&b);
        printf("Value of a = %d & value of b =%d",a,b);

    }

int swap(int *a,int *b)
    {
        int temp;
        *a=temp;
        *a=*b;
        *b=temp;
                
    }
