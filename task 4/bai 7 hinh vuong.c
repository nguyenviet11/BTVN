#include<conio.h>
#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float a,chuvi,dientich;
	printf("nhap canh:\n");
	scanf("%f",&a);
	chuvi = a *4;
	dientich = a * a;
	printf("chu vi:%f", chuvi);
	printf("dien tich:%f", dientich);
	return 0;
}
