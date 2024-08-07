#include <stdio.h>
#include <stdlib.h>

int main() {
	int vetorPrincipal[99];
	int vetorPar[99];
	int vetorImpar[99];
	int quantidade;
	int i, np, ni; 				// indice, numero par, numero impar;

	np = 0;
	ni = 0;
	i = 0;

	printf("\nQuantidade:  ");
	scanf("%d", &quantidade);

	for (i = 0; i < quantidade; i++) {

		printf("\nVetor [%d] -->  ", i + 1);
		scanf("%d", &vetorPrincipal[i]);

		if (vetorPrincipal[i] % 2 == 0) {

			vetorPar[np] = vetorPrincipal[i];
			np++;

		}

		if (vetorPrincipal[i] % 2 != 0) {


			vetorImpar[ni] = vetorPrincipal[i];
			ni++;

		}

	}

	printf("\n\nNUMEROS PARES\t\n\n");
	for (i = 0; i < np; i++) {

		printf("%d\t", vetorPar[i]);

	}

	printf("\n\nNUMEROS IMPARES\t\n\n");
	for (i = 0; i < ni; i++) {

		printf("%d\t", vetorImpar[i]);

	}

	return 0;

}
