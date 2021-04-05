#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int r,h,thetich;
	
	printf("ban kinh\n");
	scanf("%d",&r);
	printf("chieu cao\n");
	scanf("%d",&h);
	
	thetich = 3.14 * (r*r) * h;
	
	printf ("the tich = %d", thetich);
	
	return 0;
}
