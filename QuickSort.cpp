#include <stdio.h>
#include <stdlib.h> 

int part(int vet[], int inicio, int fim){
	
	int esq, dir, pivo, aux;
	
	esq = inicio + 1;
	dir = fim;
	pivo = vet[inicio];

	
	while(esq <= dir){
		
		while(esq <= dir && vet[esq] <= pivo){
			esq++;
		}
		while(dir > inicio && vet[dir] > pivo){
			dir--;
		}
		
		if(esq < dir){
			aux = vet[esq];
			vet[esq] = vet[dir];
			vet[dir] = aux;
		}
	}
	vet[inicio] = vet[dir];
	vet[dir] = pivo;
	return dir;
}

void quick(int vet[], int inicio, int fim){
	
	int pivo;
	
	if(inicio < fim){
	
	pivo = part(vet, inicio, fim);
    quick(vet,inicio, pivo - 1);
    quick(vet, pivo + 1, fim);
    }
}

int main(){
	
    int	vet[] = {4,5,3,7,6,1,2,9,8,0};
	
	quick(vet, 0, 10);
	
	for(int i = 0; i < 10; i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}
