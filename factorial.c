#include<stdio.h>
    void main(){
        int n,f;
        printf("Enter a no: \n");
        scanf("%d",&n);
        f=fact(n);
        printf("Factorial of %d is %d",n,f);
    }
    int fact(int a){
        if(a==1 || a==0){
            return 1;
        }
        else {
            return a * fact(a-1);
        }
    }
