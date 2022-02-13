#include<stdio.h>
#include<stdlib.h>
int main()
{
	int regd;
	char name[50], branch[50], hobbies[75];
	printf("enter your name: \n");
	gets(name);
	printf("enter your branch: \n");
	gets(branch);
	printf("enter your hobbies: \n");
	gets(hobbies);
	printf("enter regd no. \n");
	scanf("%d", &regd);
	printf("name is:  %s", name);
	printf("regd no.  is: %d", regd);
	printf("branch is:   %s", branch);
	printf("hobbies is:   %s", hobbies);
	
	return 0;
}
