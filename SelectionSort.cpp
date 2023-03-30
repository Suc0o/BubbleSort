#include <stdio.h>

int main(){
	
	int tam;
	
	printf("Digite o tamanho da lista: ");
	scanf("%d", &tam);
	
	int lista[tam];
	
	for(int i = 0; i < tam; i++){
		printf("Digite o %d numero da lista: ", i+1);
		scanf("%d", &lista[i]);
	}
	
	int aux;
	
	for(int i = 0; i < tam; i++){ 
		for(int y = i+1; y < tam; y++){
			if(lista[i] > lista[y]){
				aux = lista[y];
				lista[y] = lista[i];
				lista[i] = aux;
			}
		}
	}
	
	for(int i = 0; i < tam; i++){
		printf("O %d numero da lista e: %d\n", i+1, lista[i]);
	}
}
