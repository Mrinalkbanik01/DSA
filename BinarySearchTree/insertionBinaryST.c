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
int insertNode(struct node *ptr,int value){
       
        if((ptr->data)>value ){
        if (ptr->left ==NULL)
        {struct node *new = createNode(value);
        ptr->left = new;
        return 0 ;}
        else insertNode(ptr->left,value);
       }
       else if(((ptr->data)<value )){
        if (ptr->right ==NULL)
        {struct node *new = createNode(value);
        ptr->right = new;
        return 0;}
        else insertNode(ptr->right,value);
       }
       else if((ptr->data)==value){
        printf("Element hai bhai!!!!!!");
       return 0;}

    if(ptr==NULL) printf("Nhi hoga bhai!!!!!!");
    return 0;
}
void InOrerTraversal(struct node *ptr){
    if(ptr!=NULL)
{InOrerTraversal(ptr->left);
  printf("%d ",ptr->data);
InOrerTraversal(ptr->right);}

  }
int main()
{
  struct node *head = (struct node *) createNode(45);
  struct node *p2 = (struct node *) createNode(23);
  struct node *p3 = (struct node *) createNode(67);
  struct node *p4 = (struct node *) createNode(12);
  struct node *p5 = (struct node *) createNode(29);
  head->left = p2;
  head->right = p3;
  p2->left = p4;
  p2->right = p5;
  insertNode(head,69);
  InOrerTraversal(head);
}