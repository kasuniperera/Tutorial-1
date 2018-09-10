#include <stdio.h>

void selectSide();

int main()
{	
	int pgNo;
	printf("enter page number:\n" );
	scanf("%d",&pgNo);

	selectSide(pgNo);






	return 0;
}

void selectSide(int n){
	if(n%2==0)
		printf("right side.\n");
	else
		printf("left side.\n");

}