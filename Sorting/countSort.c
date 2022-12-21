#include<stdio.h>
#include<stdlib.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void countSort(int * arr , int size){
    int max=0;
    for(int i = 0 ; i<size;i++){
        if(*(arr+i)>*(arr+max)) max =i;
    }
    //int g = *(arr+max);
    int* count = (int *) malloc((arr[max]+1)*sizeof(int));
    for (int i = 0; i < (arr[max]+1); i++)
    {
        count[i] = 0; 
    }
    for(int i = 0 ; i<size;i++){
        count[*(arr+i)]++;
}
int index = 0;
for(int i = 0 ; i<(arr[max]+1);i++){
while((count[i])>0){
     *(arr+index) = i;
     index++;
     count[i]--;
}
}
}
int main()
{
   int A[] = {1,3,5,7,9,2,4,6,8,10};
    int n = 10;
    printArray(A, n);
    countSort(A, n);
    printArray(A, n);
}