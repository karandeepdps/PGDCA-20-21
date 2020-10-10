#include<stdio.h>
int main()
{
char HEXA[10];
int input,temp,index;
printf("Enter Decimal number which have to be converted ");
scanf("%d",&input);
index = 0;
while(input>0)
{
temp = input%16;
if (temp < 10)
	{HEXA[index] = temp + 48;}
else
	{HEXA[index] = temp + 55;}

input /= 16;
index++;
}

printf("\n Hex Value is ");
for(int i = index-1; i>=0;i--)
{
printf("%c",HEXA[i]);
}
printf("\n");
return 0;
}
