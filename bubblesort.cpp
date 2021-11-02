#include<stdio.h>
#include<stdlib.h>



void swap(int* a, int* b){
	int aux= *a;
	*a = *b;
	*b = aux;
}




void bubblesort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
            printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
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
	bubblesort(v, n);
	printf("Imprimindo o resultado\n");
	for(i=0; i<n; i++){
		printf("%d", v[i]);
	}
	printf("\n");
	return 0;
}
