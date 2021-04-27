#include <stdio.h>

	int getarea(int a ,int b, int c){
	float p , s;
	p = (a+b+c) / 2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s ;
} 
	

int main(){
	int a , b , c;
	float dientich;
	
	printf("nhap vao a:\n");
	scanf("%d",&a);
	printf("nhap vao b:\n");
	scanf("%d",&b);
	printf("nhap vao c:\n");
	scanf("%d",&c);
	
	if(c > a && c > b){
		 dientich = getarea(a,b,c) ;
		 printf("dien tich tam giac: %.2f\n", dientich);
	} else
	printf("ko hop le\n");
	
	return 0;
	}
	
	

