#ifndef __AUX__
#define __AUX__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int encontraMaxPivo (double **A, int diag, int n);
void trocaLinha (double **A, double *b, int n, int linha1, int linha2);
double** alocarMatriz (int lin, int col);
void lerMatriz (double **A, int lin, int col);
void imprimirMatriz (double **A, int lin, int col);
double* alocarVetor (int n);
void lerVetor (double *vet, int n);
void imprimirVetor (double *vet, int n);
double calcNorma (double *x0, double *xk, int n);

#endif

