#include<stdio.h>
#include<ctype.h>

int main()
{
char str[1000],c1,c2;
int choice,i;
printf("\n Enter String : ");
gets(str);
printf("\n Press 1 to replace a Character with a new Character"); 
printf("\n Press 2 to convert String into Upper Case"); 
printf("\n Press 3 to convert the alternate Character into Upper Case"); 
printf("\n Press 4 to check each char is whether an Alphabet, Digit or Special Character"); 
scanf("%d",&choice); 
switch(choice)
{
	case 1:
		printf("\n Enter the Character you want to replace : "); 
		fflush(stdin); 
		scanf("%c",&c1); 
		printf("\n Enter the replacement Character suggested by You : "); 
		fflush(stdin); 
		scanf("%c",&c2); 
		for(i=0; str[i]!='\0'; i++) 
			if(str[i] == c1) 
				str[i] = c2; 
		
		printf("\n New String is %s", str); 
		break; 

	case 2:
		for(i=0;str[i]!='\0';i++)
			str[i] = toupper(str[i]);
		printf("\n New String is %s", str); 
		break;

	case 3: 
		for(i=0; str[i]!='\0'; i++) 
		{ 
		if(i%2 == 0) 
		str[i] = toupper(str[i]); 
		else 
		str[i] = tolower(str[i]);  
		} 
		printf("\n New String is %s", str); 
		break;

	case 4: 
		for(i=0; str[i]!='\0'; i++) 
		{ 
		if(isalpha(str[i])) 
		printf("\n %c is Alphabet", str[i]); 
		else 
		if(isdigit(str[i])) 
		printf("\n %c is Digit", str[i]); 
		else 
		if(isspace(str[i])) 
		printf("\n %c is Space", str[i]); 
		else 
		printf("\n %c is Special Character", str[i]); 
		} 
		break;  

}

return 0;
}
