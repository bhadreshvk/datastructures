#include<stdio.h>
int main(){
    int n;
    printf("Enter no of students: ");
    scanf("%d",&n);
    int mark[n];
    int *a=&mark[0];
   for (int  i = 0; i < n; i++)
  {
        printf("Enter mark of student %d : ",i+1);
        scanf("%d",a);
        a++;
    }
    for(int i=0;i<n;i++){
        printf("\n %d",mark[i]);
    }
}