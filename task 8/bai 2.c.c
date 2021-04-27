#include <stdio.h>
#include <stdlib.h>

	int check(int a){
		int i;
		for(i=0;i<5;i++)
		if(a % 50 == 0)
		return 0;
	return 1;
	}		

	int main(){
		int a;
		
			printf("nhap vao so\n");
			scanf("%d",&a);
		
		int mul = check(a);
		if (mul == 0){
		printf("%d la boi so cua 50\n", a);
		}else
		printf("%d kp la boi so cua 50\n", a);
			
		return 0;
	}
		
		

