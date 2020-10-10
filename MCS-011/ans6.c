#include<stdio.h>
#include<limits.h>

struct worker
{
char name[10];
int hours;
int wages;
};

int main()
{
struct worker workers[7];
int i;

strcpy(workers[0].name, "karandeep singh");
strcpy(workers[1].name, "arshdeep singh");
strcpy(workers[2].name, "atinder singh");
strcpy(workers[3].name, "rahul sharma");
strcpy(workers[4].name, "rohan kalam");
strcpy(workers[5].name, "john sena");
strcpy(workers[6].name, "nolan singh");

for(i=0;i<7;i++) 
{ 
int inp = INT_MAX;
printf("\n Enter the Total Working Hours of %s : ", workers[i].name); 
while(inp>4)
	{
		scanf("%d",&inp); 
		if (inp>4)
			{
				printf("\nMaximum upto 4 Hours per day"); 
				printf("\n Enter the Total Working Hours of %s : ", workers[i].name);
			}
	}
workers[i].hours  = inp;
workers[i].wages = workers[i].hours * 100; 

}

for(i=0;i<7;i++) 
{ 
	printf("\n\n Name - %s", workers[i].name); 
	printf("\n Wages - %d", workers[i].wages); 
} 




return 0;
}

