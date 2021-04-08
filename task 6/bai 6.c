#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,b,c;
	printf("nhap a\n");
	scanf("%d",&a);
	printf("nhap b\n");
	scanf("%d",&b);
	printf("nhap c\n");
	scanf("%d",&c);
	
	if ((a * a == ( b*b + c*c)) || (b * b == (a *a + c * c)) || ( c *c == (a * a  + b * b) ) ) {
		printf("day la tam giac vuong\n");
		 if (a * a == ( b*b + c*c) ) {
			printf (" a la canh huyen\n");
			}else if (b * b == (a * a + c * c)) {
				printf ("b la canh huyen\n");
				} else if (c *c == (a * a  + b * b)) {
					printf ("c la canh huyen\n");
					}
					}else 
					printf ("day kp tam giac vuong\n");
	
	return 0;
}
