#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char a;
	printf ("nhap vao chu cai:\n");
	scanf ("%c",&a);
	
	if((a < 'A' || a > 'Z') && ( a < 'a' || a > 'z'))
	{
		printf ("ky tu k thuoc bang chu cai\n",a );
		}else
		{
		switch(a)
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf (" nguyen am\n", a);
		break;
		default: 
		printf ( "phu am\n", a);
		break;
		}
		}
	return 0;
}
