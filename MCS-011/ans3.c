#include<stdio.h>
#include<math.h>
int main()
{
int choice,time,n;
float p,rate, interest, total_amount;

printf("\nEnter Principal : "); 
scanf("%f",&p); 
printf("\n Enter Interest Rate : "); 
scanf("%f",&rate); 
printf("\n Enter No. of Years : "); 
scanf("%d",&time); 


printf("\nPress 1 for SI\n Press 2 for CI\n");
scanf("%d",&choice);
switch(choice)
	{
	case 1:
		interest = (p * time * rate) / 100; 
		printf("\n Simple Interest is Rs. %f", interest); 
		break;
	case 2:
		printf("\nEnter number of times interest applied per time period");
		scanf("%d",&n);
		total_amount = p*pow((1+(rate/n)),n*time);
		printf("\n Compound Interest is Rs. %f", total_amount-p); 
		break;
	}



return 0;
}
