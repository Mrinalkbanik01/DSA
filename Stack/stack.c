#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
void isEmpty(struct stack* alpha){
  if(alpha->top==0)printf("Bhai pura khaali hai!!\n");
  else printf("Kuch maal hai!!\n");
}
void isFull(struct stack* alpha){
    if(alpha->top==(alpha->size-1))printf("Bhai pura bharti hai!!\n");
  else printf("Kuch jagah baaki hai!!\n");
}
void push(struct stack* alpha,int value){
    ++(alpha->top);
    alpha->arr[(alpha->top)] = value;
    
}
void pop(struct stack* alpha){
    printf("\nYou poped %d",alpha->arr[alpha->top]);
    alpha->top--;
}
void printAll(struct stack *alpha){
    for(int i =0;i<=(alpha->top);i++){
        printf(" %d ||",alpha->arr[i]);
    }
}
int main()
{
 struct stack* st;
 st->size=10;
 st->top=-1;
 st->arr = (int*)malloc((st->size)*sizeof(int));
 //int arr[st->size];
 isEmpty(st);
 isFull(st);
 push(st,23);
 push(st,34);
 push(st,56);
 push(st,15);
 push(st,36);
 push(st,789);
 printAll(st);
 pop(st);
 pop(st);
}