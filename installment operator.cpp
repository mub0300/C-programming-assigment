#include<stdio.h>
#include<conio.h>

int main()
{
	float  purchase_amount;
	float no_of_installment;
	float total_purchase;
	float total_cost;
	
	printf("enter the purchase amount");
	scanf("%f",& purchase_amount);
	
	printf("enter the no of installment");
	scanf("%f",& no_of_installment);
	
	total_purchase= purchase_amount+((purchase_amount*5) / 100);
	printf("the total purchase amount=%f\n",purchase_amount);
	
	total_cost=total_purchase/no_of_installment;
	printf("cost of eaach installment:%f\n",total_cost);
	
	getch();
	
}