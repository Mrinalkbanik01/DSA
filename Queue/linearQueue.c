#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct queue {
    int front;
    int rear;
    int * arr ; 
    int size;

};
bool isFull(struct queue* q){
    if(q->rear==(q->size-1)) return true;
    else return false;
}
bool isEmpty(struct queue *q){
    if(q->rear==q->front) return true;
    else return false;
}
void enqueue(struct queue *q , int value){
    if((int)isFull(q)==1) {
        printf("You can't enter more elements");
        return ;
    }
    else{
        (q->rear)++;
        q->arr[q->rear] = value;
        return;
    }
}
void dequeue(struct queue *q){
    if((int)isEmpty(q)==1) {
        printf("You can't delete more elements");
        return ;
    }
    else{
        (q->front)++;
        printf("You poped %d",q->arr[q->front]);
        return ;
    }
}
void printAll(struct queue *q){
    for(int i = (q->front +1) ; i<=(q->rear);i++) printf("| %d |",q->arr[i]);
}
int main()
{
 struct queue * qu;
 qu->size = 8;
 qu->arr = (int *)malloc((qu->size)*sizeof(int));
 qu->front = -1;
 qu->rear = -1;
 enqueue(qu , 8);
 enqueue(qu , 98);
 enqueue(qu , 54);
 enqueue(qu , 54);
 enqueue(qu , 34);
 enqueue(qu , 50);
 printAll(qu);
 printf("\n");
 dequeue(qu);
 printf("\n");
printAll(qu);
}