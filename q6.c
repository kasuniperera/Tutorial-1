#include <stdio.h>

int sum();



int main()
{	

	int N;
	printf("enter a number:\n");
	scanf("%d",&N);

	printf("sum cubes from 5 to %d :%d \n",N,sum(N));

	return 0;
}



int sum(int n){
	if(n==5)
		return 5*5*5;
	else 
		return (n*n*n)+sum(n-1);
}