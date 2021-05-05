#include <stdio.h>
#include <conio.h>


int main(int argc, char** argv)
{
	int arr[10];
	int i;
	int total = 0;
	
	for(i = 0 ; i < 10 ; i++)
	{
		
	printf("Enter number:\n");
	scanf("%d",&arr[i]);
	total += arr[i];
	
	}
	
	printf("total digits: %d", total);
	
	return 0;
}

