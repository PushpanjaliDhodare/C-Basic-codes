#include<stdio.h>
int main()
{
	int Ono;
	char want;
	do
	{
		printf("\n*****MENU*****");
		printf("\n1. Ice-cream \n2.Cone\n3.Pestries \n4.Exit");
		
		printf("\nEnter The Order Number :");
		scanf("%d",&Ono);
		switch(Ono)
		{
			case 1:
				printf("\nYour Order Ice cream With RS 25");
			break;	
			case 2:
				printf("\nYour Order Cone With RS 35");
			break;
			case 3:
				printf("\nYour Order Pestries With RS 45");
			break;
			case 4:
				printf("\n Bye Bye !!!!...");
			break;
			defoult:
				printf("\nInvalide Order Number..");
			break;
		}
		printf("Do You Want To Place Another Order ? (Y/N)[Y-Yes / N-No] :");
		scanf("%s",&want);
		 
	}
	while (want == 'Y');
	
	return 0;
}