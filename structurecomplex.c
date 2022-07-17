#include<stdio.h>
#include<string.h>
struct complexno{
     int real;
     int imaginary;};
int main(){
    struct complexno n[2];
    for(int i=0;i<2;i++){
        printf("Enter real value of no: %d ",i+1);
        scanf("%d",&n[i].real);
        printf("Enter imaginary value of no: %d ",i+1);
        scanf("%d",&n[i].imaginary);
    }
    show(n);
    }

    void show(struct complexno a[2]){
        for(int i=0;i<2;i++){
        printf("\nThe real value of no. %d",a[i].real);
        printf("\nThe imaginary value of no. %d",a[i].imaginary);}
        
        
    }