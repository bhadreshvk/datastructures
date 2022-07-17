#include<stdio.h>
#include<stdlib.h>
typedef struct node{
                    int coef;
                    int exp;
                    struct node *next;}node;

int main(){
    int n=0,i=0;
    node *start=NULL,*current=NULL,*newnode;
    printf("Enter no. of non 0 terms:\n");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        newnode=(node*)malloc(sizeof(node));
        printf("Enter coeff of %dth term:\n",i);
        scanf("%d",&newnode->coef);
        printf("Enter expof %dth term:\n",i);
        scanf("%d",&newnode->exp);
        if(start==NULL){
            start=newnode;
        }
        else
        {
            current=start;
            while (current->next!=NULL)
            {
                current=current->next;
            }
            current->next=newnode;
            
        }
        
    }

   while (current!=NULL)
    {
        printf("%dx^%d ",current->coef,current->exp);
        current=current->next;
    }

}