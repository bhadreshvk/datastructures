#include<stdio.h>
int swap(int a,int b);
int main(){
    int a[10],temp,n,i,j,min;
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
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
    if(min!=i){
        swap(&a[i],&a[min]);
    }
    }
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
   

}
    int swap(int *a,int *b){
   *a=a-b;
   *b=a+b;
   *a=b-a;
    printf("%d %d",a,b);
    return a,b;
    }
    

