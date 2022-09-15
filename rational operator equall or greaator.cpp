#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("enter the value of ath and bth variablr");
	scanf("%d %d",&a,&b);
	
	int rel =a<=b;
	printf("the value of rel is:%d\n",rel);
	getch();
}