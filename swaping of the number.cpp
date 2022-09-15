#include<stdio.h>
#include<conio.h>

int main()
{
	int a=10;
	int b=20;
	
	//before swaap
	printf("Before Ath is =%d\n",a);
	printf("Before Bth is = %d\n",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	//After swap
	printf("After Ath is =%d\n",a);
	printf("AFTER BTH is =%d\n",b);
	
	getch();
}