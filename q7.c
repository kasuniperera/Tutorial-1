#include <stdio.h>

int main()
{
	int aCustomerPay=150;
	int showCost=2000;
	int attendee=30;
	int attendnce=520;

	int cost;
	cost=showCost+(attendnce*attendee);
	int income;
	income=aCustomerPay*attendnce;
	int profit;
	profit=income-cost;

	printf("profit:%d \n",profit);

	return 0;
}