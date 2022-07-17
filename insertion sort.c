#include<stdio.h>
int main(){
    int a[10],temp,n,i,j;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("unsorted oreder is: \n");
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\nThe sorted order is: \n");
    for(i=1;i<=n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
             }
             a[j+1]=temp;    
    }
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
}