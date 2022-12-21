#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int leave , nonLeave=0;
struct node {
    struct node * left;
    int data;
    struct node * right; 
};
struct node * createNode(int x){
      struct node*n  = (struct node * )malloc(sizeof(struct node));
      n->data = x;
      n->left = NULL;
      n->right = NULL;
      return n ;
  }
void leave_nonLeavesCounter(struct node * matha){
    if(matha!=NULL){
        if(matha->left == NULL && matha->right==NULL) leave++;
        else nonLeave++;
        leave_nonLeavesCounter(matha->left);
        leave_nonLeavesCounter(matha->right);
    }
}
int main()
{
      struct node * head = (struct node *) createNode(8);
      struct node * p2 = (struct node *) createNode(3);
      struct node * p3 = (struct node *) createNode(10);
      struct node * p4 = (struct node *) createNode(1);
      struct node * p5 = (struct node *) createNode(6);
      struct node * p6 = (struct node *) createNode(14);
      struct node * p7 = (struct node *) createNode(4);
      struct node * p8 = (struct node *) createNode(7);
      struct node * p9 = (struct node *) createNode(13);
      head->left = p2;
      head->right = p3;
      p2->left=p4;
      p2->right = p5;
      p3->right= p6;
      p6->left=p9;
      p5->left = p7;
      p5->right = p8;
      leave_nonLeavesCounter(head);
     printf("No of leaves :%d\nNo. of non leaves :%d",leave,nonLeave);
     return 0;
}

