#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char A ;
	
	printf("nhap vao mot ky tu:\n");
	scanf ("%d", &A);
	A = getchar();
	printf ("Ma ASCII cua ki tu A la: %d", A);
	return 0;
}
