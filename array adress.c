#include<stdio.h>
int main(){
    int array[10];
    int *a=&array;
    a=a+2;
    if(a==&array[2]){
        printf("Same address %u",a);
    }
}