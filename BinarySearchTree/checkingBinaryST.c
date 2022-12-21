#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
bool checkingBinarySearchTree(struct node *ptr){
    while(ptr!=NULL)
    {if(ptr->right!=NULL){
        if((ptr->right->data)<(ptr->data)) return false;
    }
    if(ptr->left!=NULL){
        if((ptr->left->data)>(ptr->data)) return false;
    }
    checkingBinarySearchTree(ptr->left);
    checkingBinarySearchTree(ptr->right);
    return true;}
     
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
  bool answer = checkingBinarySearchTree(head);
  printf("%d",answer);
}