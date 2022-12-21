#include<stdio.h>
#include<stdlib.h>
int factorial(int n){
    if(n==1) return 1;
	else{
		 int x = n*factorial(n-1);
	    return x;
	}
}
int main()
{
 int fact = factorial(5);
 printf("%d",fact);
}