#include <stdio.h>
#include <stdlib.h>

void main() {
	int n;
	char ulang;
	do {
		printf("Pilihannya ada 1,2,3\n\n");
		printf("Masukkan Pilihan anda : ");
		scanf("%i",&n);

		switch(n) {
			case 1:
				printf("\ninputan 1\n");
				printf("Apakah anda ingin mengulangnya (y/t): ");
				scanf("%s",&ulang);
				break;
			case 2:
				printf("\ninputan 2\n");
				printf("Apakah anda ingin mengulangnya (y/t): ");
				scanf("%s",&ulang);
				break;
			case 3:
				printf("\ninputan 3\n");
				printf("Apakah anda ingin mengulangnya (y/t): \n");
				scanf("%s",&ulang);
				break;
			default:
				printf("\nplease input 1, 2 or 3\n");
		}
	}
	while(ulang/='y');
}

