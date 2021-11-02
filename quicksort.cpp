#include <stdio.h>
#include <stdlib.h>

void swap(int A[], int i, int j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int partition(int A[], int inicio, int fim) {
 
    int k;
    double d;
    d = (double) rand () / ((double) RAND_MAX + 1);
    k = d * (fim - inicio + 1);
    int randomIndex = inicio + k;
    
    swap(A, randomIndex, fim);
 
    int pivo = A[fim];
    int i = inicio - 1;
    int j;

    for (j = inicio; j <= fim - 1; j++) {
        if (A[j] <= pivo) {
            i = i + 1;
            swap(A, i, j);
        }
    }
    swap(A, i + 1, fim);
    return i + 1; 
}
void quicksortAleatorizado(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int q = partition(A, inicio, fim);
        quicksortAleatorizado(A, inicio, q - 1);
        quicksortAleatorizado(A, q + 1, fim);
    }
}

int main(){
	int n, i;
	printf("Informe o valor do vetor\n");
	scanf("%d", &n);
	int v[n];
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	quicksortAleatorizado(v, 0, n - 1);
	printf("Imprimindo o resultado\n");
	for(i=0; i<n; i++){
		printf("%d", v[i]);
	}
	printf("\n");
	return 0;
}
