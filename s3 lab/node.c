#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node *start=NULL,*temp,*pos;

void main(){
    while(1){
    printf("1. add node \n");
    printf("2. delete\n");
    printf("3. display\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1: addnode();
        break;
        case 2: delete();
        break;
        case 3:display();
        break;
        default:
        printf("Wrong choice");
        break;
    }
    }

}
void addnode(){
    int item;
    printf("Enter item: \n");
    scanf("%d",&item);
    temp=(node*)malloc(sizeof(node));
    temp->data=item;
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        pos=start;
        while(pos->next!=NULL){
            pos=pos->next;
            
        }
        pos->next=temp;
    }
}
void display(){
    if(start==NULL){
        printf("Empty");
    }
    else{
    pos=start;
    while(pos!=NULL){
        printf("%d \n",pos->data);
        pos=pos->next;
    }
}
}
void delete(){
    if(start==NULL){
    printf("Empty");}
    else{
    pos=start;
    while(pos->next!=NULL){
        temp=pos;
        pos=pos->next;
    }
        
        temp->next=NULL;
        
        printf("Deleted %d \n",pos->data);
        free(pos);

    
    }
}


