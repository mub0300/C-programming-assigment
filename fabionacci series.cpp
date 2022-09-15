#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter the number of terms");
	scanf("%d",&n);
	
	int t1=0;
	int t2=1;
	int next_term =t1+t2;
	
	printf("fibonacci series,%d", next_term);
	
	for(int i=1;i<=n; i++);
	{
		printf("%d",next_term);
		t1=t2;
		t2=next_term;
		next_term=t1+t2;
	
	}
	getch();
}