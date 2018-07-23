#include <stdio.h>
#include <stdlib.h>
#define red "\033[0;31m"
#define none "\033[0m"

void main() {
	int pilih,pilih1,pilih2,pilih3;
	int loop = 10,i;
	int a = 1;
	int b = 1;
	char ulang;

        system("clear");
	do { 
		printf("\n");
	        printf("------------------------------------------------------\n");
	        printf("-                  Learning C Language               -\n");
	        printf("-                    Looping Version                 -\n");
	        printf("------------------------------------------------------\n");
	        printf("\n                 -------- Author --------             \n");
	        printf("%s                 ---- M. Ade Maulana ----             %s\n\n",red);
		printf("[1]. Program yang tersedia\n\n");
		printf("     [1]. Loop\n");
		printf("     [2]. Nested loop\n");
		printf("     [3]. Exit\n\n");
		printf("[Program Dasar][Pilihan anda]~: ");
		scanf("%i",&pilih);
		printf("\n");
		system("clear");
		switch(pilih) {
			case 1:
				system("clear");
				printf("\n");
                		printf("------------------------------------------------------\n");
                		printf("-                  Learning C Language               -\n");
                		printf("-                    Looping Version                 -\n");
                		printf("------------------------------------------------------\n");
                		printf("\n                 -------- Author --------             \n");
               			printf("                 ---- M. Ade Maulana ----             \n\n");
				printf("[1.2]. Program loop\n\n");
				printf("     [1]. Fungsi FOR\n");
				printf("     [2]. Fungsi WHILE\n");
				printf("     [3]. Fungsi DO-WHILE\n\n");
				printf("[Program Dasar][Pilihan Anda]~: ");
				scanf("%i",&pilih1);
				switch(pilih1) {
					case 1:
						system("clear");
						printf("------------------------------------------------------\n");
                                		printf("-                  Learning C Language               -\n");
                                		printf("-                    Looping Version                 -\n");
                                		printf("------------------------------------------------------\n");
                                		printf("\n                 -------- Author --------             \n");
                                		printf("                 ---- M. Ade Maulana ----             \n\n");
						printf("[+] Run Programe\n");
						for(i=1; i<loop; i++) {
							printf("this is looping using for\n");
						}
						break;
					case 2:
						system("clear");
						printf("------------------------------------------------------\n");
                                                printf("-                  Learning C Language               -\n");
                                                printf("-                    Looping Version                 -\n");
                                                printf("------------------------------------------------------\n");
                                                printf("\n                 -------- Author --------             \n");
                                                printf("                 ---- M. Ade Maulana ----             \n\n");
						printf("[+] Run Programme");
						while(a<10) {
							printf("this is looping using while\n");
							a++;
						}						
						break;
					case 3:
						system("clear");
						printf("------------------------------------------------------\n");
                                                printf("-                  Learning C Language               -\n");
                                                printf("-                    Looping Version                 -\n");
                                                printf("------------------------------------------------------\n");
                                                printf("\n                 -------- Author --------             \n");
                                                printf("                 ---- M. Ade Maulana ----             \n\n");
                                                system("clear");
                                                printf("[+] Run Programme");
						do {
							printf("This is looping do-while\n");
							b++;
						}
						while(b<10);
						break;
					default:
						printf("Inputan salah");
				}
				printf("\n");
				printf("Apakah anda ingin mengulang programnya (y/t)\n");
				printf("[Program Dasar][Pilihan Anda]~: ");
				scanf("%s",&ulang);
				system("clear");
				break;
			case 2:
				printf("\n");
                                printf("------------------------------------------------------\n");
                                printf("-                  Learning C Language               -\n");
                                printf("-                    Looping Version                 -\n");
                                printf("------------------------------------------------------\n");
                                printf("\n                 -------- Author --------             \n");
                                printf("                 ---- M. Ade Maulana ----             \n\n");
				switch(pilih2) {

				}
				break;
			case 3:
				printf("\n");
                                printf("------------------------------------------------------\n");
                                printf("-                  Learning C Language               -\n");
                                printf("-                    Looping Version                 -\n");
                                printf("------------------------------------------------------\n");
                                printf("\n                 -------- Author --------             \n");
                                printf("                 ---- M. Ade Maulana ----             \n\n");
				switch(pilih3) {

				}
				break;
			default:
				printf("Inputan tidak ada");
		}
	}
	while (ulang/='y');
	printf("[+] Cleaning programe\n");
	printf("[+] Starting run close programe\n");
	printf("[+] Thank you  for using this programe\n"); 
}
