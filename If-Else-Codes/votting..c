#include<stdio.h>
int main()
{
	int age;
	printf("\n Enter Your Age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n You Are Allowed For Votting");
	}
	else
	{
		printf("\n You Are Not Allowed For Votting");
	}
	return 0;
}