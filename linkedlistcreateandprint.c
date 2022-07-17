#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    };
int main(){
    struct node *newnode,*current,*start=NULL;
    int i,n;
    printf("Enter no of values \n");
    scanf("%d",&n);
    printf("Enter the values \n");
    for(i=0;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
    }
    if(start=NULL){
        start=newnode;
        current=newnode;
    }
    else
    {
        current->next=newnode;
        current=newnode;
    }
    printf("\n Linked list is \n");
    for(current=start;current!=NULL;current=current->next){
        printf("%d ->",current->data);
        printf("NULL");
    }
}

