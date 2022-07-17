#include<stdio.h>
int main(){
    int a[10],query,result;
    printf("enter elements: ");
    for(int i=0;i<=5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elment to search: ");
    scanf("%d",&query);
    for(int i=0;i<=5;i++){
        if(a[i]==query){
            printf("Element %d found at %d th position \n",a[i],i);
            result=1;
            break;
        }
           
    }
          if(result!=1){  
    printf("Element %d is not found ",query);}
    
}