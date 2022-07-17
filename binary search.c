#include<stdio.h>
int main(){
    int a[10],low=0,high=4,mid=0,element,found=0;
    printf("Enter list of elements in ascending order: \n");
    for (int i = 0; i <=4; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be found: ");
    scanf("%d",&element);
    
    while(low<=high){
        mid=(high+low)/2;
        if(element<a[mid]){
            high=mid-1;
    }


        else if(element>a[mid]){
            low=mid+1;

        }

        else if(element==a[mid])
        {
            printf("\n %d found at %d th position",element,mid);
            found=1;
            break;
        }
        
    
    }
    if(found!=1){
        printf("Element %d is not found ",element);
    }
    
}