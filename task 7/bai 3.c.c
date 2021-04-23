#include <stdio.h>
#include <conio.h>


int main(int argc, char** argv)
{
	int arr[10];
	int i,j,k;
	int max = 0, min = 0;
	int lmax = 0, lmin = 0;
	int tong = 0;
	
	for (i=0;i<10;i++){
	printf ("nhap vao so %d\n",i+1);
	scanf ("%d",&arr[i]);
	}
	max = arr[0];
	min = arr[0];
	
	for(i=0;i<10;i++){
	
	if(max < arr[i]) max = arr[i];
	if(min > arr[i]) min = arr[i];
	
	tong += arr[i];
	}
	
	for (i=0; i<10; i++)
	{
		if (max == arr[i]) lmax++;
		if (min == arr[i]) lmin++;
	}
		
		printf ("max = %d\n", max);
		printf ("min = %d\n", min);
		printf ("tong = %d\n", tong);
		printf("trung binh = %d\n", tong/10);
		printf("so lan xuat hien max %d\n", lmax);
		printf("so lan xuat hien min %d\n",lmin);
	
	
	return 0;
}

