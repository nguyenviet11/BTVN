#include <stdio.h>
#include <conio.h>


int main(int argc, char** argv)
{
	int arr[10];
	int i;

	
	for (i=0;i <= 10;i++){
	printf("nhap vao gia tri %d\n", i);
	scanf ("%d",&arr[i]);
	}
	for (i=0; i <=10;i+=2)
	printf ("cac so o vi tri chan :%d\n",arr[i]);
	



	return 0;
}

