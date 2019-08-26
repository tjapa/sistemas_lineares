#include "aux.h"

/* Seja um S.L. de ordem 'n'*/
void eliminacaoGauss (double **A, double *b, int n) {
	/* para cada linha a partir da primeira */
	double m;
	int i, k, j, iPivo;
	for (i=0; i < n; ++i) {
		iPivo = encontraMaxPivo(A, i, n);
		if (i != iPivo)
			trocaLinha (A, b, n, i, iPivo);

		for (k=i+1; k < n; ++k) {
			m = A[k][i] / A[i][i];
			A[k][i] = 0.0;

			for (j=i+1; j < n; ++j)
				A[k][j] -= A[i][j] * m;
			b[k] -= b[i] * m;
		}
	}
}
