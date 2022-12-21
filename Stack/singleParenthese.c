#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack {
    int size;
    char * arr;
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
int push(struct stack * st){
    if(isFull(st)==1) return -1;
    else{ (st->top)++;
    return 1;}
    
}
int pop(struct stack * st){
    if(isEmpty(st)==1) return -1;
   else{(st->top)--;
   return 1;} 
}
int main()
{
    char string[100];
  struct stack * st = (struct stack *)malloc(sizeof(struct stack));
  st->size = 20;
  st->top = -1;
  st->arr = (char*)malloc((st->size)*sizeof(char));
  printf("Enter your string\n");
  scanf("%s",string);
  
  for(int i = 0 ; i<strlen(string);i++){
    if(string[i]=='('){
        int x = push(st);
        if(x==-1){
            printf("Invalid Expression!!!");
            return 0;
        }
    }
    else if(string[i]==')'){
        int x = pop(st);
        if(x==-1){
            printf("Invalid Expression!!!");
            return 0;
        }
    }
    
  }
  if(st->top==-1) printf("Valid Expression");
    else printf("Invalid Expression");
}