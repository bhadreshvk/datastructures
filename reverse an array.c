#include<stdio.h>
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        printf("Enter value %d ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Given order: ");
    for(int i=0;i<5;i++){
        printf("\n %d",array[i]);
        }
    reverse_array(array);
}
int reverse_array(int *value){
    int temp;
       for(int i=0;i<5/2;i++){
       temp=value[i];
       value[i]=value[i-5-1];
       value[i-5-1]=temp;
    }
    int a[5]=*value;
    printf("\nThe reverse order is:");
    for(int i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }
}