#include<stdio.h>
#include<stdlib.h>
typedef struct node {
                    int coef;
                    int exp;
                    struct node *next;
}node;
node *createll(int n);
void displayll(node *start);


/* int main(){
    node *start=NULL,*newnode,*current;
    printf("Enter no of non zero terms:\n");
    int terms;
    scanf("%d",&terms);
    printf("Enter non zero terms starting from highest order:\n");
    for (int i=0;i<terms;i++)
    {
        newnode=(struct node*)malloc(sizeof(node));
        newnode->next=NULL;
        printf("Enter coefficient:\n");
        scanf("%d",&newnode->coef);
        printf("Enter its exponenet:\n");
        scanf("%d",&newnode->exp);
        if(start=NULL){
            newnode->next=NULL;
            start=newnode;
            current=newnode;
            
          
        }
        else
        {   while (current->next!=NULL)
        {
            current->next=newnode;
            current=newnode;
            current=current->next;
        }
        
           
            
        }
        
    }
    printf("The polynomial is:\n");
    for (current=start;current!=NULL;current=current->next){
        printf("%dx^%d ",current->coef,current->exp);
    }
       
    
}*/

int main(){
    int n;
    node *start=NULL;
    printf("How many non 0 terms:\n ");
    scanf("%d",&n);
    start=createll(n);
    displayll(start);
}

node *createll(int n){
    node *start=NULL,*newnode=NULL,*current=NULL;
    for(int i=n;i>0;i--){
        newnode=(node *)malloc(sizeof(node));
        printf("Enter coeff of %d term ",i);
        scanf("%d",&newnode->coef);
        printf("Enter exp of %d term ",i);
        scanf("%d",&newnode->exp);
        newnode->next=NULL;

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
        return start;
        
    
}
void displayll(node *start){
    node *current=start;
    while (current!=NULL)
    {
        printf("%dx^%d ",current->coef,current->exp);
        current=current->next;
    }
    
}