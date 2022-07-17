#include<stdio.h>
int main(){
    int a[10],n,temp=0;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    
    printf("\nEnter the elements:\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The unsorted order is : \n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int  j = 0; j < n-1-i; j++)
        {
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;}
        }
        
    }
    printf("\nThe sorted order is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

    
    
    
