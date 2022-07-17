#include<stdio.h>
#include<stdlib.h>
typedef struct node{
                    int data;
                    struct node *left;
                    struct node *right;}node;
node * createtree();
int main(){
    node *start=NULL;
    start=createtree();
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
        printf("Enter left child of %d:\n ",n);
        newnode->left=createtree();
        printf("Enter right child of %d:\n",n);
        newnode->right=createtree();
        return newnode;
    }
}