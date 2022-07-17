#include<stdio.h>
int main(){
    int array[10];
    for(int i=0;i<10;i++)
    {
        array[i]=5*i;
        
    }
    
    for(int i=0;i<10;i++){
        printf("\n %d",array[i]);
    }
    printf("%d",array);
    int *a=array;
    printf("\n %u",a);
}
