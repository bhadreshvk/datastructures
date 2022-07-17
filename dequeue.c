#include<stdio.h>
#define max 5
int queue[max];
int front,rear,item;
front=-1;
rear=-1;
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
    if(front==0&&rear==max-1||front==rear+1){
        printf("Overflow");
     }
     if(front==-1){
         front=0;
         rear=0;
     }
     if(rear=max-1){
         rear =0;
     }
     else{
         rear=rear+1;
     }
    printf("Enter element: \n");
    scanf("%d",&item);
    queue[rear]=item;
    
}
int addfront(){
    if(front==0&&rear==max-1||front==rear+1){
        printf("Overflow");
    }
    if(front==-1){
         front=0;
         rear=0;
     }
     if(front=0){
         front=max-1;
     }
     else{
         front=front-1;
     }
     printf("Enter element: \n");
    scanf("%d",&item);
    queue[front]=item;
    
}
int deletefront(){
    if(front==-1){
        printf("Underflow");
    }
    print("%d deleted",queue[front]);
    if(front==rear){
        front=rear=-1;
    }
    if(front==max-1){
        front=0;
    }
    else{
        front=front+1;
    }}

int deleterear(){
    if(front==-1){
        printf("Underflow");
    }
    printf("%d deleted",queue[rear]);
    if(front==rear){
        front=rear=-1;
    }
    if(rear==0){
        rear=max-1;
    }
    else{
        rear=rear-1;
    }
}
int print(){
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}
