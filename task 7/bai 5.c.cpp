#include <stdio.h>
#include <conio.h>


int main(int argc, char** argv)
{
	int arr[4][30];
	int row,col;
	int tong = 0;
	
	
	for(col=0;col<30;col++){
		tong = 0;
		for(row=0;row<4;row++)
		{
		printf("nhap vao diem cac mon\n");	
		scanf("%d",&arr[row][col]);
		tong += arr[row][col];
		}	
		printf("trung binh cac mon = %d\n",tong/4);
		}
	return 0;
}

