#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    struct node *lchild,*rchild;
    int data;
    
}node;
node *root=NULL;
node* insert(int data){
    node*p=(node*)malloc(sizeof(node));
    if(root==NULL){
        node*p=(node*)malloc(sizeof(node));
        p->data=data;
        p->lchild=NULL;p->rchild=NULL;
        root=p;
    }
    
    else{
       node*temp=root;
        node*temp1;
        while(temp!=NULL){
        temp1=temp;
       if(data<temp->data){
           
           temp=temp->lchild;
           
       }
        else{
            
            temp=temp->rchild;
        }
        }
    
    if(data<temp1->data){
        temp1->lchild=temp;
        temp->lchild=NULL;
        temp->rchild=NULL;
       
    }
    else{
        temp1->rchild=temp;
        temp->lchild=NULL;
        temp->rchild=NULL;
    }
    }
    
    inorder(root);
}
void inorder(node*input){
    if(input){
    inorder(input->lchild);
    printf("%d",input->data);
    inorder(input->rchild);
    }
}
void main(){
insert(20);
insert(5);


}
