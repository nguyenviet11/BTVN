#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,b,c;
	
	printf ("nhap vao a:\n");
	scanf ("%d", &a);
	printf ("nhap vao b:\n");
	scanf ("%d", &b);
	printf ("nhap vao c:\n");
	scanf ("%d", &c);
	
	if (a > b && a > c){
		printf("A is max\n", a);
	} else if (b > a && b > c) {
		printf ("B is max\n", b);
	} else if ( c > a && c > b) {
		printf ("C is max\n", c);
	} else 
	printf ("k co so nao\n");
	
	
	return 0;
}
