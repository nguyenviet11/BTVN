#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,b;
	printf ("nhap a\n");
	scanf ("%d", &a);
	printf ("nhap b\n");
	scanf ("%d", &b);
	if(a%b==0){
		printf("b la uoc cua a\n");
		}else if(b%a==0){
			printf("a la uoc cua b\n");
			}else
			printf ("ko co so");
	return 0;
}
