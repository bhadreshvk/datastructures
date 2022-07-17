#include<stdio.h>
#include<stdlib.h>
struct node
 {
int data;
struct node * next;
} * start=NULL,*pos,*t;

int main()
{ 

  int ch;

void insert_end();

void display();

void delete_end();

while (1)
{
 printf("\n Singly linked list");
printf("\n 1.insert at end\n2.display\n3.delete from end\n8.Exit");
printf("\nEnter your choice:");
scanf("%d",& ch);
switch( ch)
{
case 1:insert_end();
break;
case 2:display();
break;
case 3: delete_end();
break;
case 8: exit(0);
default:printf("wrong choice");

}
}

 return 0;

}


void insert_end()

{

    int num;

    t=(struct node*)malloc(sizeof(struct node));

    printf("Enter data:");

    scanf("%d",&num);

    t->data=num;

    t->next=NULL;

 

    if(start==NULL)        

    {

        start=t;

    }

    else

    {

        pos=start;

        while(pos->next!=NULL)

        pos=pos->next;

        pos->next=t;

    }

}


void display()

{

    if(start==NULL)

    {

        printf("List is empty");

    }

    else

    {

        pos=start;

        printf("The linked list is:\n");

        while(pos!=NULL)

        {

            printf("%d",pos->data);

            pos=pos->next;

        }

    }

}


void delete_end()

{

    if(start==NULL)

    {

        printf("The list is empty");

    }

    else

    {

        pos=start;

        while(pos->next->next!=NULL)

        pos=pos->next;

 

        t=pos->next;

        pos->next=NULL;

        printf("Deleted element is %d",t->data);

        free(t);

    }

}

