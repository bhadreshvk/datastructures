#include<stdio.h>
#include<stdlib.h>
typedef struct node{
                int data;
                struct node *left;
                struct node *right;
}node;

node * createtree();
int main(){
    node *start=NULL;
    start=createtree();
    printf("Inorder: \n");
    inorder(start);
    printf("\nPreorder: \n");
    preorder(start);
    printf("\nPostorder: \n");
    postorder(start);
    printf("\n");
}                    
node * createtree(){
    int n;
    node * newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter value of node: ,Enter -1 for no data:\n");
    scanf("%d",&n);
    if(n==-1){
        return 0;
    }
    else {
        newnode->data=n;
        printf("Enter left child of %d: should be less than %d\n ",n,n);
        newnode->left=createtree();
        printf("Enter right child of %d: should be greiter than %d \n",n,n);
        newnode->right=createtree();
        return newnode;
    }
    
}
int inorder(node *start)  {
    
    if(start==NULL){
        return 0;
    }
    else
    {   
        inorder(start->left);
        printf("%d ",start->data);
        inorder(start->right);
    }
}
int preorder(node *start)
{
    if(start==NULL){
        return 0;
    }
    else {
        printf("%d ",start->data);
        preorder(start->left);
        preorder(start->right);
    }
}
    
int postorder(node * start){
    if(start==NULL){return 0;}
    else
    {
        postorder(start->left);
        postorder(start->right);
        printf("%d ",start->data);
    }
    
}
