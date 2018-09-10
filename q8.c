#include <stdio.h>

int main(int argc, char const *argv[])
{
	float n;
	printf("enter a positive integer:");
	scanf("%f",&n);
	int i;
	int sum=0;
	if(n<0){
		    while(n<0){
		printf("ERROR!!\n");
			printf("enter another positive integer:");
			scanf("%f",&n);
		    	
		    }
	}
	if(n==0){
		printf("No avarage! \n");

	}else{
		for(i=0; i<=n; i++){
			sum=sum+i;
		} 
		float avarage;
		avarage=sum/n;
		printf("sum:%d\n",sum );
		printf("avarage of numbers:%.2f\n",avarage );

	}













	return 0;
}