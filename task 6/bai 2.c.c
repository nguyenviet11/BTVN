#include <stdio.h>

int main()
{
 char a;
 int b;
 
 printf("Nhap ky tu bat ky: ");
 scanf("%c", &a);
 b = a - 48;
 if (a>='A' && a<='Z')
 printf(" '%c' la chu in hoa",a);
 else if (a>='a' && a<='z')
 printf("'%c' la chu in thuong",a);
 else if (b >= 0 && b<=9)
 printf("'%d' la so",b);
 else 
 printf("ky tu k nam trong bang alpha va so");
 return 0;
}

