#include<stdio.h>
#include<stdlib.h>
void swap(int *x1 , int *x2){
    int temp;
    temp = *x1;
    *x1 = *x2;
    *x2 = temp;

}
void selectionSort(int *arr, int size){
        for(int i = 0;i<size;i++){
            int min = i;
            for(int j = (i+1);j<size;j++){
                if(*(arr+min)>*(arr+j)) min = j;
            }
            swap(arr+i,arr+min);
        }
}
int main()
{
 int arr[10] = {1,3,5,7,9,2,4,6,8,10};
 selectionSort(arr,10);
 for(int i = 0;i<10;i++){
    printf("%d ",arr[i]);
   }
}