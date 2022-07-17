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
        front=0;
        rear=0;
    }
    else{
        if(rear==max-1){
            rear=0;
        }
        else{
            rear=rear+1;
        }
    }
    printf("Enter element \n");
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
    printf("Enter item: ");
    scanf("%d",&item);
    queue[front]=item;
}
deleterear(){
    if(front==-1){
        printf("Underflow");
    }
    printf("Deleted %d",queue[rear]);
    if(front==rear){
        front=0;rear=0;
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
        front=0;rear=0;}
        else{
            if(front==max-1){
                front=0;
            }
            else{
                front=front+1;
            }
        }
}
display(){  int front_pos = front,rear_pos = rear;
  if(front == -1)
  {  printf("Queue is empty\n");
    return;   }
  /*printf("Queue elements :\n");
  if( front_pos <= rear_pos )
  {  while(front_pos <= rear_pos)
    {  printf("%d ",queue[front_pos]);
      front_pos++;  }  }
  else
  {  while(front_pos <= max-1)
    {  printf("%d ",queue[front_pos]);
      front_pos++;  }
    front_pos = 0;
    while(front_pos <= rear_pos)
    {  printf("%d ",queue[front_pos]);
      front_pos++;
    }
  }
  printf("\n");
}*/
if(front_pos<=rear_pos){
    while(front_pos<=rear_pos){
        printf("%d ",queue[front_pos]);
        front_pos++;
    }
}
else{
    while(front_pos<=max-1){
        printf("%d ",queue[front_pos]);
        front_pos++;
    }
    front_pos=0;
    while(front_pos<=rear_pos){
        printf("%d ",queue[front_pos]);
        front_pos++;
    }
}
}

