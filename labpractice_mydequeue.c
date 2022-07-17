#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
int item;
void main(){
    while(1){
        choose();
    }
}
int choose(){
    printf("\n 1. Add at rear \n");
    printf("2. Add at front \n");
    printf("3. Delete at front \n");
    printf("4. delete at rear \n");
    printf("5. Print");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1: addrear();
        break;
        case 2: addfront();
        break;
        case 3: deletefront();
        break;
        case 4: deleterear();
        break;
        case 5: print();
        break;
        default:
        printf("Invalid selection");
        break;
    }
}

int addrear(){
    if(front == 0 && rear == MAX-1 || front == rear+1){
    printf("Overflow");
    }
    printf("Enter item \n");
    scanf("%d",&item);
    if(front==-1&&rear==-1){
        front=0;
        rear=0;
        
    }
    else {
        if(rear == MAX-1)  {
    rear = 0;}
    else{          
        rear=rear+1;
        
    }
    queue[rear]=item;
    }
}
int addfront(){
    if(front==0){
        printf("Overflow");
    }
    else{printf("Enter item \n");
        scanf("%d",&item);
        if(front==-1&rear==-1){
            front=0;
            rear=0;
            queue[0]=item;
        }
        else{
            
            front=front-1;
            queue[front]=item;
        }
    }
}
int deletefront(){
    if(front==-1){
        printf("Underflow");
    }
    else{
        if(front=rear){
            printf("%d deleted \n",queue[front]);
            front=rear=-1;
        }
        else{
            printf("Deleted element %d \n",queue[front]);
            front=front+1;
        }
    }
}
int deleterear(){
    if(rear=-1){
        printf("Underflow");
    }
    printf("Deleted element %d \n",queue[rear]);
    if(rear=front){
            
            front=rear=-1;
        }   
    else{
            if(rear == 0){
      rear=MAX-1;}
            
            else{
            rear=rear-1;
        }

}
}
int print(){
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}
