#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,h,dientich;
	printf ( "chieu dai day\n" );
	scanf ("%d", &a);
	
	printf ("chieu cao\n");
	scanf ("%d", &h);
	
	dientich = (a * h)/2;
	
	printf ("dien tich=%d", dientich);
	return 0;
}
