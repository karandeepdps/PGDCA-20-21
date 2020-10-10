#include<stdio.h>
#include<stdbool.h>

int main()
{
char str[10]; 
bool found = false;
char arr[][5] = {"a", "cat", "in", "zoo"}; 
int lower = 0, upper = 4, mid_index, count = 0; 

printf("\n Input the String to Search : "); 
gets(str); 

   while (lower <= upper) {
      int mid =  (upper + lower) / 2;
      if (strcmp(str,arr[mid]) == 0)
         {found = true;
         break;}
      else if (((strcmp(arr[mid],str)) > 0))
         upper = mid - 1;
      else
         lower = mid + 1;
   }

   if(found) 
      printf("\n String Found"); 
   else 
      printf("\n String Not Found"); 


return 0;
}
