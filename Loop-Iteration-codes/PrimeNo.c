#include<stdio.h>
int main()
{ 
	int no, i, flag=1;
	
	printf("\nEnter Any Number :");
	scanf("%d",&no);
	
	if(no == 0)
	{
		flag = 1;
		
	}
	else
	{
		for(i = 1; i <= no -1; i++ )
		{
			if(no % i == 0)
			{
				flag = 0;
				break;
			}
		}
	}
	if(flag == 1)
	{
		printf("\nEntered Number Is Prime No..");
	}
	else
	{
		printf("\nEntered Number Is Not Prime Number");
	}
	return 0;
}