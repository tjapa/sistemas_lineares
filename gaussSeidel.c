#include "aux.h"

void gaussSeidel (double **A, double *b, double *x0, int n, double tol) {
	double norma = 1.0 + tol;
	double *xk = alocarVetor(n);
	double soma;
	int i, j, k = 0;

	while (norma > tol) {
		for (i = 0; i < n; i++) {
			soma = 0.0;
			for (j = 0; j < i; j++)
				soma += A[i][j] * xk[j];
			for (j = i+1; j < n; j++)
				soma += A[i][j]	* x0[j];
			xk[i] = (b[i] - soma) / A[i][i];

		}
		norma = calcNorma (x0, xk, n);
		memcpy (x0, xk, n * sizeof(double));
		k++;
	}
}
