#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next ;
};
struct node* creation(struct node * prev , int data){
    struct node * new = (struct node*)malloc(sizeof(struct node));
    new ->data = data;
    new->next = NULL;
    prev->next = new;
    return new;
}
void printall(struct node * head){
    struct node * temp = head;
    while(temp!=NULL){
        printf("| %d |",temp->data);
        temp = temp ->next;
    }

}
void sort(struct node*head){
    struct node *temp = head;
    int count = 0;
   while(head!=NULL){
      count++;
      head = head->next;
   }
   int arr[count];
   for(int i = 0 ; i<count ; i++){
    arr[i] = temp->data;
       temp = temp->next;
   }
   for(int i = 0 ; i<(count-1);i++){
    for(int  j = (i+1);j<count ; j++){
           if(arr[i]>arr[j]) {
            int tempo = arr[i];
            arr[i] = arr[j];
            arr[j] = tempo;
           }
    }
   }
   for(int  j = 0 ;j<count ; j++){
     printf("| %d |",arr[j]);
   }

}
void printReverse(struct node * head){
    struct node *temp = head;
    int count = 0;
   while(head!=NULL){
      count++;
      head = head->next;
   }
   int arr[count];
   for(int i = 0 ; i<count ; i++){
    arr[i] = temp->data;
       temp = temp->next;
   }
   for(int j = (count-1);j>=0;j--){
        printf("| %d |",arr[j]);
   }
}
int main()
{
int count = 0 ; 
int x = 0;
//struct node * temp=NULL;
struct node * head = (struct node*)malloc(sizeof(struct node));
while(x!=5){
    printf("Enter your choice:\n1.Create a node\n2.Print list\n3.Pirnt reversr list\n4.Print sorted list of elements\n5.Termiante\n");
    scanf("%d",&x);
    switch(x){
        case 1 :{
            if((head->data)==NULL){
                int value;
                printf("Enter your data");
                scanf("%d",&value);
                
                head->data = value;
                head->next = NULL;
            }
            else{
                int value;
                printf("Enter your data");
                scanf("%d",&value);
                temp = creation(temp, value);
            }
            break;
        } 
        case 2:{
            if(temp=NULL) printf("List is empty");
            else printall(head);
            break;
        }
        case 5 :{
            printf("Fuck you");
            break;
        }
        case 4:{
            sort(head);
            break;
        }
        case 3:{
            printReverse(head);
            break;
        }
        default: printf("wrong operation");
    }
}

}