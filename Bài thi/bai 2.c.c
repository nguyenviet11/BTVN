#include <stdio.h>
#include <stdlib.h>

int main()
{  
	char a[30];
  	int i;
 	 	printf("Enter string: ");
 		gets(a);
 	
	for(i=0;i<=strlen(a);i++)
   	{
      	if(a[i] >=65 &&  a[i]<=90)
     	a[i] = a[i]+32;
   }
   printf("\nUpper Case: %s",a);
   
   return 0;
}
