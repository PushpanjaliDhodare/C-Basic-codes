#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("\nEnter no :");
	scanf("%d,%d,%d",&a,&b,&c);
	
	if(a>b)
	{
		if(b>c)
		{
			printf("\n B is Big ");	
		}
		else
		{
			printf("\n C is Big");	
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n B is Big ");
		}
		else
		{
			printf("\n C is Big");
		}
	}
	
	return 0;
}