#include<stdio.h>
#define max 5
int front=-1;
int rear=-1;

int queue[max];
void main()
{   while(1){
    int choice;
    
    printf("1 insert rear \n 2 insert front \n 3 delete rear \n 4 delete front\n 5 display \n");
scanf("%d",&choice);
switch(choice){
    case 1 : insertrear();
    break;
    case 2: insertfront();
    break;
    case 3: deleterear();
    break;
    case 4: deletefront();
    break;
    case 5:display();
    break;
    default:
    printf("Wrong choice");
    break;
}
}
}

    

void insertrear(){
    int item;
    if(front==0&&rear==max-1||front==rear+1){
        printf("Overflow");
    }
    if(front==-1){
        front=0;rear=0;
    }
   else{
       if(rear==max-1){
           rear=0;
       }
       else{
           rear=rear+1;
       }
   }
   printf("ENter item: ");
   scanf("%d",&item);
   queue[rear]=item;

}
insertfront(){
    int item;
    if(front==0&&rear==max-1||front==rear+1){
        printf("Overflow");
    }
    if(front==-1){
        front=0;rear=0;
    }
    else{
        if(front==0){
            front=max-1;
        }
        else{
            front=front-1;
        }
    }
   printf("Item");
   scanf("%d",&item);
   queue[front]=item;
}
deleterear(){
    if(front==-1){
        printf("UNderflow");
    }
    printf("Deleted %d",queue[rear]);
    if(front==rear){
        front=-1;rear=-1;
    }
    else{
        if(rear==0){
            rear=max-1;
        }
        else{
            rear=rear-1;
        }
    }
}
deletefront(){
    if(front==-1){
        printf("Underflow");
    }
    printf("Deleted %d",queue[front]);
    if(front==rear){
        front=-1;rear=-1;
    }
    else{
        if(front==max-1){
            front=0;
        }
        else{
            front=front-1;
        }
    }
}
display(){  
    int frontpos=front;
    int rearpos=rear;
    if(frontpos==-1){
        printf("Empty");
    }
    if(frontpos<=rearpos){
        while(frontpos<=rearpos){
            printf("%d ",queue[frontpos]);
            frontpos++;
        }
    }
    else{
        while (frontpos<=max-1)
        {
           printf("%d ",&frontpos);
           frontpos++;
        }
        frontpos=0;
        while(frontpos<=rearpos){
            printf("%d ",queue[frontpos]);
            frontpos++;
        }
        
    }
}

