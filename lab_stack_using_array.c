#include<stdio.h> 
void main() 
{ 
int x,a[10],top=-1,ch,choice; 
do 
{ 
printf(" MENU\n1. PUSH\n2. POP\n3. MAKE NULL\n4. STACK FULL\n5. STACK EMPTY"); printf("\nEnter your choice :"); 
scanf("%d",&ch); 
switch(ch) 
{ 
 case 1:printf("Enter a number:"); 
 scanf("%d",&x); 
 if(top==9) 
 printf("Stack overflow"); 
 else 
 { 
 top=top+1; 
 a[top]=x; 
 } 
 break; 
 case 2:if(top==-1) 
 printf("Stack underflow"); 
 else
 { 
 printf("Deleted element %d ",a[top]);  top=top-1; 
 } 
 break; 
 case 3:top=-1; 
 break; 
 case 4:if(top==9) 
 printf("true"); 
 else 
 printf("false"); 
 break; 
 case 5:if(top==-1) 
 printf("true"); 
 else 
 printf("false"); 
 break; 
 default:printf("Invalid choice "); 
} 
printf("\nDO YOU WANT TO CONTINUE OR NOT(1/0)"); scanf("%d",&choice); 
}while(choice==1); 
}
