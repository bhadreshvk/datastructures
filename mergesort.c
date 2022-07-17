#include<stdio.h>
int main(){
    int a[5]={1,9,45,6,3,8};
    int low=0;int high=5;
    partition(a,low,high);

}
void partition(int a[5],int low,int high){
    if(low<high){
    int mid=(low+high)/2;
    partition(a,low,mid);
    partition(a,mid+1,high);
    merge(a,low,mid,high);
}}

void merge(int a[5],int low,int mid,int high){
    int h,i,j,b[5],k;
    h=i=low;
    j=mid+1;
    while((h<=mid)&&(j<=high)){
        if(a[h]<=a[j]){
            b[h]=a[h];
            h++;
        }
        else{
            b[h]=a[j];
            j++;
        }
        i++;
    

    while(j<=high){
        b[i]=a[j];
        i++;
        j++;
    }
    while(h<=mid){
        b[i]=a[h];
        i++;
        h++;
    }
}
    
    for(int o=0;o<=5;o++){
        printf("%d ",b[o]);
    }
}
