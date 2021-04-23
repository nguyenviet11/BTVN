#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) 
{
	char name[5][30];
	int i;
	
	for (i=0; i<5; i++)
	{
		printf ("nhap vao ten %d: ", i+1);
		fflush(stdin);
		gets(name[i]);
	}
	printf ("cac ten:\n ");
	for (i=0; i<5; i++)	
		printf ("%s\n", name[i]);

	return 0;
}

