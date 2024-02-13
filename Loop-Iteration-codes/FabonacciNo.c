#include<stdio.h>
int main()
{
	int a=0,b=1,i,level, c=0;
	
	printf("\nEnter The Fabonacci series Level No:");
	scanf("%d",&level);
	
	printf("\n%d  \n%d", a ,b);
	
	for(i = 1; i <= level; i++)
	{
		c = a + b;
		
		printf("\n%d",c);
		
		a = b;
		
		b = c; 
	}
	return 0;
}