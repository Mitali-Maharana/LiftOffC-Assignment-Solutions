#include<stdio.h>
int main()
{
	int a, b;
	printf("enter 2 nos.");
	scanf("%d%d", &a,&b);
	
	if (a>b)
	{
		printf("%d is maximum", a);
	}
	
	else
	{
		printf("%d is maximum", b);
	}
}
