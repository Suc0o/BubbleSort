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
	
	char aux;
	
	for(int i = 0; i < tam; i++){
		for(int y = 0; y < tam; y++){
			if(lista[y] > lista[y + 1]){
				aux = lista [y + 1];
				lista [y + 1] = lista[y];
				lista[y] = aux;
			}
		}
	}
	
	for(int i = 0; i < tam; i++){
		printf("O %d numero da lista e: %d\n", i+1, lista[i]);
	}
}
