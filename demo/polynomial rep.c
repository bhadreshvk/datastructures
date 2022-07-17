#include<stdio.h>
void main(){
    int deg,poly[deg];
    printf("Enter degree: ");
    scanf("%d",&deg);
    printf("Enter polynomial: \n");
    for(int i=deg;i>0;i--){
        scanf("%d",&poly[i]);
           }
    printf("Enter degree of 2nd polynomial");
    
    int deg2;
    scanf("%d",&deg2);
    int poly2[deg2];
    printf("Enter 2nd polynomial: \n");
    for(int i=deg2;i>0;i--){
        scanf("%d",&poly2[i]);
    }
    
    printf("The 1st polynomial is: \n");
    for(int i=deg;i>0;i--)
    {
        printf("%dx^%d \n",poly[i],i);
    }
    printf("The 2nd polynomial is: \n");
    for(int i=deg2;i>0;i--)
    {
        printf("%dx^%d \n",poly2[i],i);
    }
    int deg3=deg>deg2?deg:deg2;
    int poly3[deg3];
    for(int i=deg3;i>0;i--){
        poly3[i]=poly[i]+poly2[i];
    }
    printf("The resultant poly is \n");
    for(int i=deg3;i>0;i--){
        printf("%dx^%d \n",poly3[i],i);
    }
}