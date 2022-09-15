#include<stdio.h>
#include<conio.h>

int main()
{
	int a=100;
	int b=400;
	printf("the value of sum is=%d\n",(a+b));
	printf("the value of sub is=%d\n",(a-b));
	
	goto jump;
	printf("the value of multi is=%d\n",(a*b));
	
	 jump:
	printf("the value of divide is=%d\n",(a/b));
	printf("the value of mode is=%d\n",(a%b));
	
	getch();
}