#include <stdio.h>

int main(){

	int array[10];
	int i,min;
	printf("input the ten values:");
	for(i=0; i<10; i++){
		scanf("%d",&array[i]);
	}

	min=array[0];

	for(i=0; i<10; i++){
		if(min>array[i])
			min=array[i];
	}

	printf("smallest value is:%d \n",min);
	 return 0;
}