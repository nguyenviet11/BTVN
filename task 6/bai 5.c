#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a;
	printf("          MENU      \n");
	printf("====================\n");
	printf("1.  CF\n");
	printf("2.  C \n");
	printf("3.  HDJ\n");
	printf("4.  DreamWeaver\n");
	printf("5.  RDBMF\n");
	printf("6.  Learn Java By Example\n");
	printf("====================\n");
	scanf("%d", &a);

	printf("Chon :%d\n",a);
	if(a==1){
		printf("ban chon CF\n");
	}else if (a==2){
		printf("ban chon C\n");
	}else if(a==3){
		printf("ban chon HDJ\n");
	}else if(a==4){
		printf("ban chon DreamWeaver\n");
	}else if(a ==5){
		printf("ban chon RDBMF\n");
	}else if(a==6){
		printf("ban chon Learn Java By Example\n");
	}else
		printf ("ban chon sai\n");
					
	return 0;
}
