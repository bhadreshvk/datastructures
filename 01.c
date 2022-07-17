#include<stdio.h>
void main(){
    int i=5;
    int *p=&i;
    printf("Address of i is %u \n",p);
    address(p);
}
int address(int a){
    
    int *b=&a;
    
    printf("Address: %u",b);
}