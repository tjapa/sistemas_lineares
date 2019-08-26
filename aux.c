#include "aux.h"

int encontraMaxPivo (double **A, int diag, int n) {
	int i, max = diag;
	for (i = diag+1; i < n; i++)
		if (A[i][diag] > A[max][diag])
			max = i;
	return max;
}

void trocaLinha (double **A, double *b, int n, int linha1, int linha2) {
	int col;
	double aux;
	for (col = 0; col < n; col++) {
		aux = A[linha1][col];
		A[linha1][col] = A[linha2][col];
		A[linha2][col] = aux;
		aux = b[linha1];
		b[linha1] = b[linha2];
		b[linha2] = aux;
	}
}

double** alocarMatriz (int lin, int col) {
	int i;
	double **m = (double **) malloc(lin*sizeof(double*));
	for (i = 0; i < lin; i++) {
		m[i] = (double *) malloc (col*sizeof(double));
	}
	return m;
}

void lerMatriz (double **A, int lin, int col) {
	int i, j;
	for (i = 0; i < lin; i++)
		for (j = 0; j < lin; j++)
			scanf ("%lf", &A[i][j]);
}

void imprimirMatriz (double **A, int lin, int col) {

	int i, j;
	for (i = 0; i < lin; i++) {
		for (j = 0; j < lin; j++)
			printf ("%.2lf ", A[i][j]);
		printf("\n");
	}

}

double* alocarVetor (int n) {
	double *m = (double *) malloc(n*sizeof(double));
	return m;
}

void lerVetor (double *vet, int n) {
	int i;
	for (i = 0; i < n; i++)
		scanf ("%lf", &vet[i]);
}

void imprimirVetor (double *vet, int n) {
	int i;
	for (i = 0; i < n; i++)
		printf ("%.2lf ", vet[i]);
}

double calcNorma (double *x0, double *xk, int n) {
	int i;
	double norma = 0, aux;

	for (i = 0; i < n; i++) {
		aux = fabs (x0[i] - xk[i]);
		if (norma < aux)
			norma = aux;
	}
	return norma;
}

