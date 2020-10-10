#include<stdio.h>
#include<limits.h>
int main()
{
int matrix[3][3];
printf("Enter the elements \n");
for (int row = 0; row < 3; row++)
	{
	for(int col = 0; col < 3; col++)
	{
	printf("%d %d: ", row+1, col+1);
	scanf("%d", &matrix[row][col]);
	printf("\n");
	}
}
int min = INT_MAX;
int max = INT_MIN;
for(int i = 0; i < 3; i++){ 
		for(int j = 0; j < 3; j++) { 
			if(matrix[i][j] < min) 
				min = matrix[i][j]; 
			if(matrix[i][j] > max) 
				max = matrix[i][j]; 
		} 
	} 
 
	printf("Minimum value: %d\nMaximum Value: %d\n", min, max); 
 




return 0;
}
