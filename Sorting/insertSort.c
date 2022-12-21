#include<stdio.h>
#include<stdlib.h>

void insertionSort(int *arr,int size){
for(int j =1;j<size;j++){
    for(int i=0;i<j;i++){
        if(*(arr+i)>*(arr+j)){
            int temp = *(arr+j);
            for(int x=j;x>i;x--) *(arr+x)=*(arr+(x-1));
            *(arr+i)= temp;
        }
    }
}
}
int main()
{
 int arr[10] = {1,3,5,7,9,2,4,6,8,10};
 insertionSort(arr,10);
 for(int i = 0;i<10;i++){
    printf("%d ",arr[i]);
   }
}