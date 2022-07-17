#include<stdio.h>
void main(){
    int finalvalue,p,i,n,r;
    printf("Enter SIP amt:");
    scanf("%d",&p);
    printf("Enter duration: ");
    scanf("%d",&n);
    printf("Enter expected annaul return rate: ");
    scanf("%d",&r);
    i=r/100/r;
    finalvalue=p((1+i)^n-1)*(1+i)/i;
    printf("The final amt will be %d")

}