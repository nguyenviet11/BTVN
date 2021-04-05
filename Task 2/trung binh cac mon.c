#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int toan,ly,hoa,sum,trungbinh;
	
	printf("mon toan\n");
	scanf( "%d", &toan );
	
	printf( "mon ly\n" );
	scanf( "%d", &ly);
	
	printf( "mon hoa\n" );
	scanf( "%d", &hoa);
	
	sum = toan + ly + hoa;
	trungbinh = (toan + ly + hoa)/3;
	
	printf( " sum is (%d + %d + %d) = %d ", toan, ly, hoa, sum );
	printf( "average is (sum)/3 = %d ", trungbinh );
	
	return 0;
	}

