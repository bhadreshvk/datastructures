#include<stdio.h>
#include<stdlib.h>
    typedef struct node{
        int data;
        struct node* next;
    }node;
    node *start,*pos,*temp;
    node *n;
    void createnode();
    void deletenode();
    void display();
    void main(){
while(1){
    int choice;
    printf("1. Create node\n");
    printf("2. Delete node\n");
    printf("3. Display node\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:createnode();
        break;
        case 2 :deletenode();
        break;
        case 3: display();
        break;
        default:
        printf("Invalid choice \n");
        break;
    }
}
}
void createnode(){
    
    start=NULL;
    temp=(node*)malloc(sizeof(node));
    printf("Enter item: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    if(start==NULL){
        start=temp;
    }
    else{
        pos=start;
        
        while(pos->next!=NULL){
            pos=pos->next;
            pos->next=temp;
        }
        
    }
    
    
}
void deletenode(){
    
    pos=start;
    node* pos1;
if(start==NULL){
    printf("Empty");
} 
while(pos!=NULL){
    pos1=pos;
    pos=pos->next;
}
pos1->next=NULL;


}
void display(){
   
    start=pos;
    while(pos!=NULL){
        printf("%d \n",pos->data);
        pos=pos->next;
    }
}