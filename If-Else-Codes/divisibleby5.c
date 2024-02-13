#include<stdio.h>
int main() 
 {
 	int n;
 	printf("\nEnter Any Number :");
 	scanf("%d",&n);
 	
 	if(n%5==0)
 	{
 		printf("\nEntered NO Is Fully Divisible by 5");
	}
	else
	{
		printf("\nEntered No Is NOT Divisible by 5");
	}
	return 0;
 }