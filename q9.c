#include <stdio.h>

int main()
{
	int n,i;
	printf("input the number:\n");
	scanf("%d",&n);
	int k=0;

	for(i=2; i<=n/2; i++){
		if((n%i)==0)
			k=1;
	}
	
	if(k==0){
		printf("%d is a prime number.\n",n);
	}else{
		printf("%d is not prime number.\n",n);
	}

	return 0;
}