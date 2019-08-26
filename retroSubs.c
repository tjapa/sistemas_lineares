void retroSubs (double **A, double *b, double *x, int n) {
	/* para cada linha a partir da primeira */
	double soma;
	int i = n-1, j;
	x[i] = b[i]/A[i][i];
	for (i = n-2; i >= 0; i--) {
		soma = b[i];
		for (j=i+1; j < n; ++j)
			soma -= A[i][j] * x[j];
		x[i] = soma/A[i][i];
	}
}
