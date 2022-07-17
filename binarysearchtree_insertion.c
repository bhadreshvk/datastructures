#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node * right;
    struct node * left;
}node;
void insert();
int main(){
    int d;
    printf("Insert data:\n");
    scanf("%d",&d);
    insert(d);

}
void insert(int d){
    node *start,*current,*parrent,*entereddata;
    entereddata=(node*)malloc(sizeof(node));
    entereddata->data=d;
    entereddata->left=NULL;entereddata->right=NULL;
    parrent=start;
    if(start==NULL){
        entereddata=start;
    }
    else{
        current=start;
        while(current){
            parrent=current;
            if(entereddata->data>current->data){
                current=current->right;
            }
            else{
                current=current->left;
            }
        }
        if(entereddata->data>parrent->data){
            parrent->right=entereddata;
        }
        else{
            parrent->left=entereddata;
        }

    }
}
