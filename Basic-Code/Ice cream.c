#include<stdio.h>
int main()
{
      
   float price,quantity,total=0.0,discount=0.0,netbill=0.0;

	printf("Enter the price of ice cream :");
	scanf("%f",&price);
	
	printf("Enter the price of quantity :");
	scanf("%f" ,&quantity);
	
	total=price*quantity;
    printf("\n Total=%f",total);
	
	discount=total*0.15;
	printf("\ndiscount=%f",discount);
	
	netbill=total-discount;
	printf("\nnetbill=%f",netbill);
	
	return 0;
	
	
	
	
	
	
}