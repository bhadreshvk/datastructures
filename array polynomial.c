#include<stdio.h>
int main(){
    printf("Enter degree of polynomial\n");
    int d,a[5];
    scanf("%d",&d);
    printf("Enter polynomial in the form x^%d n\n",d);
    for (int i = d; i >= 0; i--)
    {
        scanf("%d",&a[i]);
    }
    for(int i=d;i>=0;i--){
        if(i=d)
            printf("%dx^%d ",a[i],d);

       if(i=1)
            printf("%dx ",a[i]);

       if(i=0)
            printf("%d ",a[i]);

        else
        {
            printf("%dx^%d ",a[i],i);
        }
               

        
    }
}