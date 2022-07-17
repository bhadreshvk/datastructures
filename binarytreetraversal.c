#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
  
}node;
int preorder();
int inorder();
int postorder();
int main(){
    node *start;
    printf("Preorder is: \n");
    preorder(start);
    printf("Inorder is: \n");
    inorder(start);
    printf("Postorder is: \n");
    postorder(start);
    }
int preorder(node *start)
{
    if(start==NULL){
        return 0;
    }
    else {
        printf("%d",start->data);
        preorder(start->left);
        preorder(start->right);
    }
    

}  
int inorder(node *start)  {
    if(start==NULL){
        return 0;
    }
    else
    {
        inorder(start->left);
        printf("%d",start->data);
        inorder(start->right);
    }
    
}
int postorder(node * start){
    if(start==NULL){return 0;}
    else
    {
        postorder(start->left);
        postorder(start->right);
        printf("%d",start->data);
    }
    
}