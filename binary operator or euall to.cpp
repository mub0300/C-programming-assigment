#include<conio.h>
#include<stdio.h>

int main()
{
	int a,b;
	printf("enter the value of ath and bth variablr");
	scanf("%d %d",&a,&b);
	
	if(a==b || b==a)
	{
		printf("the value is true \n");
	}
	else
	{
		printf("the value is false \n");
	}
}