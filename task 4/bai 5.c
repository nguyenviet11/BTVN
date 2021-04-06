#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int t,b,h;
	float dientich;
	
	printf("day nho:\n");
	scanf ("%d",&t);
	
	printf("day lon:\n");
	scanf ("%d",&b);
	
	printf("chieu cao:\n");
	scanf ("%d",&h);
	
	dientich = h*((t+b)/2);
	
	printf ("dien tich hinh thang:%f\n", dientich);
	return 0;
}
