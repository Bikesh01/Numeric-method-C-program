#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;

};
struct node *root=NULL;
struct node* createnewnode(int data)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
}
void inorder_traverse(struct node *root)
{
    if (root!=NULL)
    {       
        inorder_traverse(root->left);
        printf("%d\n",root->data);
        inorder_traverse(root->right);
    }
    
}

void preorder_traverse(struct node *root)
{
    if (root!=NULL)
    {       
        printf("%d\n",root->data);
        preorder_traverse(root->left);
        preorder_traverse(root->right);
    }
    
}


int main()
{
    struct node* root=createnewnode(1);
    root->left=createnewnode(2);
    root->right=createnewnode(3);
    root->left->left=createnewnode(4);
    root->left->left->left=createnewnode(5);
    root->left->left->left->right=createnewnode(6);
    root->left->left->left->right=createnewnode(7);

    inorder_traverse(root);
    printf("\n");
    preorder_traverse(root);



    
    return 0;
}