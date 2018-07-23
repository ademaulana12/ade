#include<stdio.h>
#include"fungsi.c"

void main() {
	int fkt = 0, bilangan = 3;
	fkt = faktorial(bilangan);
	
	printf("%d! = %d\n", bilangan, fkt);
	printf("\n-end of program-\n");
}
