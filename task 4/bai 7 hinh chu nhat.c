#include<conio.h>
#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    float m, n, p,s;
    
    printf ("Nhap chieu rong canh m:\n");
    scanf ("%f",&m);
    
    printf ("Nhap chieu cao canh n:\n");
    scanf ("%f",&n);
    s=m*n;
    p=(m+n)*2;
    printf("Chu vi la: %f\n", p);
    printf("Dien tich la: %f\n", s);
	return 0;
}
