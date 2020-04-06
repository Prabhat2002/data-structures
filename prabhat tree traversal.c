#include<stdlib.h>
#include <stdio.h>
 struct node
 {
  int data;
  struct node *left;
  struct node *right;
 };

struct node* new(int data)
{
  struct node *start=(struct node*)malloc(sizeof(struct node));
  start->data=data;
  start->left=NULL;
  start->right=NULL;
  return(start);
}

void inorder(struct node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("\nData :%d\n",p->data);
        inorder(p->right);
    }
    else
    return;
}

void preorder(struct node *p)
{
    if(p!=NULL)
    {
        printf("\nData :%d\n",p->data);
        preorder(p->left);
        preorder(p->right);
    }
    else
    return;
}

void postorder(struct node *p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("\nData :%d\n",p->data);
    }
    else
    return;
}

void traverse(struct node *p)
{
    if(p!=NULL)
    {
        printf("\nTraversing of Data :%d\n",p->data);
        traverse(p->left);
        traverse(p->right);
    }
    else
    return;
}

int main()
{
struct node *root=new(100);
root->left=new(300);
root->right=new(400);
root->left->left=new(500);
root->right->right=new(600);
printf("TRAVERSING");
traverse(root);
printf("\nINORDER TRAVERSAL!\n");
inorder(root);
printf("PREORDER TRAVERSAL!\n");
preorder(root);
printf("POSTORDER TRAVERSAL!\n");
postorder(root);
return 0;
}
