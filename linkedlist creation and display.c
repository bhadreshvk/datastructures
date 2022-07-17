#include<stdio.h>
#include<stdlib.h>
typedef struct node{ int data;
            struct node *next;
}node;
node * createll(int n);
void displayll(node *start);

int main(){
    int n;
    node *start=NULL;
    printf("How many elements: \n");
    scanf("%d",&n);
    start=createll(n);
    displayll(start);
}

node * createll(int n){
    int i;
    node * start=NULL,*temp=NULL,*pos=NULL;
    for(i=0;i<n;i++){
        temp=(node *)malloc(sizeof(node));
        printf("Enter data of node %d ",i+1);
        scanf("%d",&temp->data);
        temp->next=NULL;

        if(start==NULL){
            start=temp;
        }
        else
        {
            pos=start;
            while (pos->next!=NULL)
            {
                pos=pos->next;
                
            }
            pos->next=temp;
            
        }
        
    }
    return start;
 }

void displayll(node* start){
        node *pos=start;
        while (pos!=NULL)
        {
            printf("\t%d ->",pos->data);
            pos=pos->next;
        }
        printf(" NULL");
    }