#include<stdio.h>
int main()
{
	int age;
	
	printf("\nEnter Your Age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nYou are Allowed For Driving ");
	}
	else
	{
		printf("\nYou are Not Allowed For Driving");
	}
	return 0;
}