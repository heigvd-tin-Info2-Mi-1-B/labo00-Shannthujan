// labo 00

#include <stdio.h>
#include <stdlib.h>



int main(void)
{

	char TAB[100];
	int k = 0, m = 0, n = 1;
	printf("Entrez une chaine de caractere\n");
	for (; k < 100; k++) {
		scanf("%c", &TAB[k]);
		m++;
		if (TAB[k] == ' ') {
			n++;
		}
		else if (TAB[k] == '\n') {
			k = 100;
		}
	}

	printf("%d\n", n);

	for (k = 0; k < m; k++) {
		printf("%c", TAB[k]);
		if (TAB[k] == ' ') {
			printf("\n");
		}
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}