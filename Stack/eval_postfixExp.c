#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct stack {
    int size;
    int * arr;
    int top;
};
int isEmpty(struct stack * st){
    if(st->top==-1) return 1;
    else return 0;
}
int isFull(struct stack * st){
if(st->top==(st->size-1)) return 1;
else return 0;
}
int push(struct stack * st , int value){
      (st->top)++;
    (st->arr)[st->top] = value;    
}
int pop(struct stack * st){
    int  x =  st->arr[(st->top)];
     (st->top)--;
   return x;

}
int operation(char op , int op1, int op2){
    switch(op){
        case '+':{
            return(op1+op2);
            break;
        }
        case '-':{
            return(op1-op2);
            break;
        }
        case '*':{
            return(op1*op2);
            break;
        }
        case '/':{
            return(op1/op2);
            break;
        }
    }
}
int main()
{
  char string[100];
  struct stack * st = (struct stack *)malloc(sizeof(struct stack));
  st->size = 20;
  st->top = -1;
  st->arr = (int*)malloc((st->size)*sizeof(char));
  printf("Enter your string\n");
  scanf("%s",string);
  for(int i = 0 ; i<strlen(string);i++){
     if((isdigit(string[i]))){
         char zero = '0';
        int num = (((int)string[i])-((int)zero));
        printf("%d\n",num);
        push(st,num );
     }
     else{
        int op2 = pop(st);
        int op1 = pop(st);
        int res = operation(string[i],op1,op2);
        push(st, res);
     }
  }
  int fResult = pop(st);
  printf("%d",fResult);
}