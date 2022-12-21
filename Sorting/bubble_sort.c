#include<stdio.h>
#include<stdlib.h>
void swap(int *x1 , int *x2){
    int temp;
    temp = *x1;
    *x1 = *x2;
    *x2 = temp;

}
int main()
{
   int arr[10] = {1,4,7,3,5,9,10,4,6,5};
   for(int j=9;j>1;j--){
    for(int i = 0;i<j;i++){
    if((arr+=i)>arr[i+1]) swap(&(arr+=i),&arr[i+1]);
   }
   }
   for(int i = 0;i<10;i++){
    printf("%d ",(arr+=i));
   }
}


