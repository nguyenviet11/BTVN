#include <stdio.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{

	int a,b,c,xtemp;
	printf("so thu 1\n");
	scanf("%d", &a); // a= 8
	printf("so thu 2\n");
	scanf("%d", &b); // b = 5
	printf("so thu 3\n");
	scanf("%d", &c); // c =7
	
	if(a > b){ // nêu a > b thì 	
		xtemp = a; // gán xtemp = giá tri cua a tuc la 8	
		a = b; // gan a =  gia tri cua b = 5 		
		b = xtemp; // gan b = gia tri cua xtemp = 8
		} // a = 5; b = 8; c = 7
		if(b > c){ // neu b = 8 > c = 7 thi
			xtemp = b; // gan xtemp = gia tro cua b = 8	
			b = c; // gan b = gia tri  cua c = 7
			c = xtemp// gan c = gia tri cua xtemp = 7
			;} //a = 5; b = 7; c = 8 
			
			else 
				printf("day so theo thu tu tang dan: %d %d %d \n", a,b,c);
				
				
			
	
	return 0;
}
