#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    char o;
    printf("\nNhap phep toan: ");
    scanf("%c", &o);
 
    printf("\nNhap vao 2 so a, b: ");
    scanf("%d%d", &a, &b);
 
    switch (o)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        if(b == 0){
            printf("Khong the chia cho 0!");
        }else{
            printf("%d / %d = %.2f", a, b, (float)a / b);
        }
        break;
 
    default:
    printf("Khong co phep toan %c!", o);
        break;
    }
}
 
