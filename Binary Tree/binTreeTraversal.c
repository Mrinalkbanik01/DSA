#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *left;
    struct node *right;
    int data;
  };
  struct node * createNode(int x){
      struct node*n  = (struct node * )malloc(sizeof(struct node));
      n->data = x;
      n->left = NULL;
      n->right = NULL;
      return n ;
  }

void preOrerTraversal(struct node *ptr){
    if(ptr!=NULL)
  {printf("%d ",ptr->data);
  preOrerTraversal(ptr->left);
  preOrerTraversal(ptr->right);}
  
  }

  void InOrerTraversal(struct node *ptr){
    if(ptr!=NULL)
{InOrerTraversal(ptr->left);
  printf("%d ",ptr->data);
InOrerTraversal(ptr->right);}

  }
  
  void postOrerTraversal(struct node *ptr){
    if(ptr!=NULL)
{postOrerTraversal(ptr->left);
postOrerTraversal(ptr->right);
printf("%d ",ptr->data);}

  }
int main()
{
  struct node *head =createNode(23);
  struct node *p2 =createNode(45);
  struct node *p3 =createNode(67);
  struct node *p4 =createNode(12);
  struct node *p5 =createNode(29);
  head->left = p2;
  head->right = p3;
  p2->left = p4;
  p2->right = p5;
  preOrerTraversal(head);
  printf("\n");
  InOrerTraversal(head);
  printf("\n");
  postOrerTraversal(head);
}