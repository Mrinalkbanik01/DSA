
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