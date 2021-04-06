#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char c;
	printf ("nhap vao:\n");
	scanf ("%c",&c);
	if ( c >= 'A' && c <= 'Z' )
	
	{
	printf ("%c", c + 'a' - 'A');}
	else{
	
	printf ("chu thuong%c\n", c );
}
	return 0;
}
