// This Program Prepared For Ice-cream Shop------->

#include<stdio.h>
int main()
{
	int order,qty,total=0,sum=0;
	float disc=0.0,netbill=0.0;
	
	//Take input for customer orde
	printf("\n*****Menu*****");
	printf("\n1. Ice -cream :Rs.25");
	printf("\n2. Cone :Rs.35");
	printf("\n3. Pestries :Rs.45");
	printf("\n4. Ice -cream :Rs.100");
	printf("\n5. Exit");
	
	printf("\n Ente Your Order No :");
	scanf("%d",&order);
	
	if(order>=1 && order<=4)
	{
		printf("\n Enter The Quantity : ");
		scanf("%d",&qty);
		
		if(order==1)
		{
			 printf("\n Your Order Is Ice-cream With Rs.25 ");
			 total=25*qty;	
		}
		else if(order==2)
		{
			 printf("\n Your Order Is Cone With Rs.35 ");
			 total=35*qty;
		}	
		else if(order==3)
		{
			printf("\n Your Order Is Pestries With Rs.45 ");
			total=45*qty;
		}
		else
		{
			printf("\n Your Order Is Pizza With Rs.100 ");
		  	total=35*qty;
		}	
	}
	printf("\n Total Bill =%d",total);
	if(total >=200)
	{
		printf("\n You Got 20 perc Discount");
		disc=total*0.20;
		printf("\n Discount=%f",disc);
		netbill=total-disc;
		printf("\n Net Bill==%f",netbill);
		printf("\nTHANK YOU..&..VISIT AHAIN");
	}
	else
	{
		sum=200-total;
		printf("\n Purchase More items RS %d To Allowed Discount",sum);	
		printf("\n Not a Valid Menu List");
	}
	return 0;
}