#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,b;
	printf("1.  mm\n");
	printf("2.  cm\n");
	printf("3.  dm\n");
	printf("4.  km\n");
	scanf("%d", &a);
	if(a==1){
		scanf("%d", &b);
		printf ("%d mm",b * 1000 );
		 }else if(a == 2){
		 	scanf("%d", &b);
			printf ("%d cm", b * 100);
			 }else if( a == 3){
			scanf("%d", &b);
				printf ("%d dm", 100/b);
				}else if ( a == 4){
					scanf("%d", &b);
					printf ("%d km", 1000/b);
					}else 
					printf ("chon sai\n");
	return 0;
}
