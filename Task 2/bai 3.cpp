#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int r,d,dientich,chuvi;
	
	printf("nhap ban kinh\n");
	scanf("%d",&r);
	printf("nhap duong kinh\n");
	scanf("%d",&d);
	dientich = r * r * 3,14;
	chuvi = d * 3.14;
	
	printf("dien tich=%d",dientich);
	printf("chu vi=%d",chuvi);
	return 0;
}
