#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1,item;

void main(){
    while(1){
    choice();
    }

}
int choice(){
    int choice;
    printf("1. For insert\n");
    printf("2. For delete \n");
    printf("3. For print\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case /* constant-expression */1:
        /* code */insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        print();
        break;
    default:
        printf("Invalid choice");
        break;
    }
}

    int insert(){
        if(rear==MAX-1){
            printf("Overflow\n");
        }
        else{
            if(front==-1){
            front=0;}
            printf("Enter item: \n");
            scanf("%d",&item);
            rear=rear+1;
            queue[rear]=item;
            
        }
    }
    int delete(){
        if(front=-1||front>rear){
            printf("Underflow");
        }
        
        printf("Item deleted is %d",queue[front]);
        front=front+1;
        }
    
    int print(){
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
