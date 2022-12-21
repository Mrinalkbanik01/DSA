#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct queue {
    int front;
    int rear;
    int * arr ; 
    int size;

};
bool isEmpty(struct queue *qu){
    if(((qu->front)%(qu->size))==((qu->rear)%(qu->size))) return true ;
    else return false;
}
bool isFull(struct queue *qu){
    if((((qu->rear)%(qu->size))-((qu->front)%(qu->size))==7)||(((qu->front)%(qu->size))-((qu->rear)%(qu->size))==1)) return true ;
    else return false;
}
void enqueue(struct queue * qu , int value){
    if((int)(isFull(qu))==1) printf("Queue full!!!");
    else{
        (qu->rear)++;
        qu->arr[(qu->rear)%(qu->size)] = value;
        
    }
}
void dequeue(struct queue* qu){
    if((int)(isEmpty(qu))==1) printf("Queue full!!!");
   else { printf("You popped %d",qu->arr[(qu->front)%(qu->size)]);
    (qu->front)++;} 
}
void printAll(struct queue * qu){
    if((int)(isFull(qu))!=1)
                {int i = (qu->front)%(qu->size);
                    while(i!= ((qu->rear)%(qu->size)))
                    {printf("| %d |",qu->arr[i]);
                    i++;}}
    else{
        int i = (qu->front)%(qu->size);
        int count=0;
        while(count!=8){
            printf("| %d |",qu->arr[i]);
            count++;
            i++;
            i = (qu->front)%(qu->size);
        }
    }
}
int main()
{
  struct queue * qu;
  qu->front = 0;
  qu->rear = -1;
  qu->size=8;
 qu->arr = (int *)malloc((qu->size)*sizeof(int));
 int x=0;
 while(x!=4){
    printf("Enter your choice:\n1.Push\n2.Pop\n3.Print all the elements\n4.Return");
        scanf("%d",&x);
    switch(x){
        case 3:printAll(qu); break;
        case 1:{
            printf("Enter the value to be enqueued");
            int value;
            scanf("%d",&value);
            enqueue(qu,value); 
            break;}
        case 2:dequeue(qu) ; break ; 
        case 4 : printf("Thnx for participating in the game") ;break;
        default : printf("Your chiose th wrong option!!!!"); break;
    }
 }
}