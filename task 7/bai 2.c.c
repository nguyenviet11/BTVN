
#include <stdio.h>
#include <conio.h>


int main(int argc, char** argv)
{
	int arr[5];
	int i,j;
	float brr[10];
	
	
	for(i=0,j=0 ;i < 5; i++,j++){
	printf ("nhap vao so %d\n",i+1);
	scanf("%d",&arr[i]);
	brr[j] = arr[i];
	
	}
	for ( j = 5;j<10;j++)
	brr[j] = 0;
	
	for(i = 0 ; i < 5 ; i++)
	printf("int %d\n",arr[i]);
	for(j=0; j < 10; j++)
	printf("float %.2f\n",brr[j]); 
		
	return 0;
}

