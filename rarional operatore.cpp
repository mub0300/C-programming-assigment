#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter the number of term");
	scanf("%d",&n);
	
	int a=0;
	int b=1;
	int next_term;
	printf("fabinacci series; %d %d",next_term);
	
	for (int i=1; i<=n; i++);
	{
		printf("%d",next_term);
		a=b;
		b=next_term;
		next_term=a+b;
	}
	
	getch();
}