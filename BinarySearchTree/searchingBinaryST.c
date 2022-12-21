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
void searchingBinarySearchTree(struct node *ptr,int target){
    if(ptr->data==target) printf("Found!!!");
    else{
        if(target>ptr->data){
            if(ptr->right==NULL) printf("Haat chutiye!!!!");
            else searchingBinarySearchTree(ptr->right, target);
            }
        else {
            if(ptr->left==NULL) printf("Haat chutiye!!!!");
            else searchingBinarySearchTree(ptr->left, target);
            }
    }
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
  printf("Haa chal chutiye apna number daal to search\n");
  int data;
  scanf("%d",&data);
 searchingBinarySearchTree(head,data);
}