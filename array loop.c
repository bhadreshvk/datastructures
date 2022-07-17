#include<stdio.h>
int main()
{   printf("Enter no of students: ");
    int n;
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        printf("\nEnter value of student %d ",i+1);
        scanf("%d",&marks[i]);
    }

    for (int i =0;i<n; i++)
    {
        printf("\nMark of stdent %d: is %d",i+1,marks[i]);
    }
    
}