//This Program Is Prepare For Student RESULT-----

#include<stdio.h>
int main()

{ 
	float com,ac,c,web,lab_com,lab_c,lab_web,total=0.0,percen=0.0;
	
	printf("\n Enter The Marks Of COMPUTER :");
	scanf("%f",&com);	
	
	printf("\nEnter The Marks Of ACCOUNTING :");
	scanf("%f",&ac);
	
	printf("\nEnter The Marks Of LANGUAGE,C :");
	scanf("%f",&c);
	
	printf("\nEnter The Marks Of WEB DESIGN :");
	scanf("%f",&web);
	
	printf("\nEnter The Marks Of LAB ON COMPUTER  :");
	scanf("%f",&lab_com);
	
	printf("\nEnter The Marks Of  LAB ON C :");
	scanf("%f",&lab_c);
	
	printf("\nEnter The Marks Of LAB ON WEB DESIGN :");
	scanf("%f",&lab_web);
	
	total=com+ac+c+web+lab_com+lab_c+lab_web;
	printf("\ntotal marks =%f",total);
	
	percen=total/7;
	printf("\nYour percentage= %f",percen);
	
	return 0;
}