
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1,num2,tong,hieu,tich;
	float thuong;
	
	printf ("nhap so num1=\n");
	scanf ("%d", &num1);
	printf ("nhap so num2=\n");
	scanf ("%d", &num2);
	
	tong = num1 + num2;
	hieu = num1-num2;
	tich = num1*num2;
	thuong = (num1) / (num2);
	
	printf ("tong:%d\n", tong);
	printf ("hieu:%d\n", hieu);
	printf ("thuong:%f\n", thuong);
	printf ("tich:%d\n", tich);
	return 0;
}
