#include <stdio.h>
#include "gauss.h"
#include "gaussSeidel.h"
#include "retroSubs.h"
#include "aux.h"

int main() {
	int n, pivo;
	double **A, *b, *x;
	//printf ("Tamanho da matriz: ");
	scanf ("%d", &n);

	A = alocarMatriz (n, n);
	lerMatriz (A, n, n);
	imprimirMatriz (A, n, n);
	printf("\n");

	b = alocarVetor (n);
	lerVetor (b, n);
	imprimirVetor (b, n);
	printf("\n");
	printf("\n");

	x = alocarVetor (n);
	lerVetor (x, n);
	imprimirVetor (x, n);
	printf("\n");
	printf("\n");

	gaussSeidel(A, b, x, n, 0.002);

	printf("\n");
	imprimirMatriz (A, n, n);
	printf("\n");
	imprimirVetor (b, n);
	printf("\n");
	printf("\n");
	imprimirVetor (x, n);
	printf("\n");
	return 1;
}
