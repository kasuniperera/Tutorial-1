#include <stdio.h>

int main(int argc, char const *argv[])
{


	float r1,r2;
	float a1,a2;
	float pi=3.14;
	float d;
	printf("enter radious of two cycles:");
	scanf("%f%f",&r1,&r2);
	a1=pi*r1*r1;
	a2=pi*r2*r2;
	printf("area of one cycle(r=%.2f):%.2f	,pi=%.2f \n",r1,a1,pi);
	printf("area of another cycle:%.2f	,pi=%.2f\n",a2,pi);
	if(a1>a2)
		d=a1-a2;
	else
		d=a2-a1;
		printf("deference between the area of cycles:%.2f \n",d);
	return 0;
}