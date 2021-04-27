#include <stdio.h>

int tong(int a , int b){
	return(a+b);
}
int hieu(int a , int b){
	return(a-b);
}
int tich(int a , int b){
	return(a*b);
}
int thuong(int a , int b){
	return(a/b);
}
int main(){
	int a, b, c,d;
	
	printf("  TINH TOAN                        \n");
	printf("===================================\n");
	printf("1. Nhap so                         \n");
	printf("2. Tinh tong                       \n");
	printf("3. Tinh hieu                       \n");
	printf("4. Tinh tich                       \n");
	printf("5. Tinh thuong                     \n");
	printf("6. Thoat                           \n");
	fflush(stdin);
	scanf("%d",&c);
	
	if(c == 1){
		printf("nhap vao so\n");
		scanf("%d",&a);
		printf("nhap vao so\n");
		scanf("%d",&b);
		
		fflush(stdin);
		printf("phep tinh muon chon\n");
		scanf("%d",&d);
		
		switch(d){
			case 2:
			printf("tong : %d\n", tong(a,b));
			break;
			case 3:
			printf("hieu : %d\n", hieu(a,b));
			break;
			case 4:
			printf("tich : %d\n", tich(a,b));
			break;
			case 5:
			printf("thuong : %d\n", thuong(a,b));
			break;
			case 6:
			printf("ban da dung chuong trinh\n");
			break;
		}
	}
	return 0;
}


