#include <stdio.h>

void quick(int vet[], int inicio, int fim) {
	
    if (inicio >= fim) {
        return;
    }
    
    int pivo = vet[fim];
    int i = inicio;
    
    for (int j = inicio; j < fim; j++) {
        if (vet[j] <= pivo) {
            int aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
        }
    }
    
    int aux = vet[i];
    vet[i] = vet[fim];
    vet[fim] = aux;
    
    quick(vet, inicio, i - 1);
    quick(vet, i + 1, fim);
}

int main() {
	
    int vet[] = {4, 1, 6, 2, 3, 7, 5, 9, 0, 8};
    int tam = sizeof(vet) / sizeof(int);
    
    quick(vet, 0, tam - 1);
    
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
    
    return 0;
}
