#include <stdio.h>
#include <conio.h>

void nhapMang(int a[], int n) 
{
    int i;
    for (i = 0; i < n; i++) {
        printf("Nhap a ", i);
        scanf("%d", &a[i]);
    }
}
 
void xuatMang2(int a[], int n) 
{
    int i;
    for (i = n-1; i >= 0; i--) {
        printf ("%d \t", a[i]);
    }
}
 
int main() 
{
    int n = 5;
    int a[n];
    nhapMang(a, n);
    xuatMang2(a, n);
     
    return 0;
}

