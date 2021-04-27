#include <stdio.h>
#include <conio.h>

	float dientich(int a, int  b){
		return (a * b );
}
	float chuvi(int a, int b){
		return((a+b)/2);
}
	int main(){
		int a , b;
		int c,d,e;
		
		printf("nhap chieu dai\n");
		scanf("%d",&d);
		printf("nhap chieu rong\n");
		scanf("%d",&e);
		fflush(stdin);
		
		printf("1. Dien tich\n");
		printf("2. Chu vi\n");
		
		scanf("%d",&c);
		switch(c){
			case 1:
			printf("%f", dientich(d,e));
				break;
			case 2:
			printf("%f", chuvi(d,e));
			break;
			}
		return 0;
	}
			
			
	
