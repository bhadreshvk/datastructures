#include<stdio.h>
int main(){
    printf("Enter 2 nos: ");
    int a,b;
    scanf("%d%d",&a,&b);
    sumandavg(&a,&b);
}
int sumandavg(int *c,int *d){
    int sum;
    float avg;
    sum=*c+*d;
    avg=(float)((*c+*d)/2);
    printf("Sum = %d & avg = %f",sum,avg);
    int *a=&sum;
    a=10*sum;
    printf("\n10 times of sum is %d",a);


}