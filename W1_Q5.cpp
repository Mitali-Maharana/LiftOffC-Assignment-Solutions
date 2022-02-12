#include<stdio.h>
int main()
{
	int r;
	printf("enter the radius: ");
	scanf("%d", &r);
	printf("the diameter is: %d\n", 2*r);
	printf("the circumference is: %f\n", 2*(22/7.0)*r);
	printf("the area is: %f\n", (22/7.0)*r*r);
	
	return 0;
}
