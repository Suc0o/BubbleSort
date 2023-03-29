#include <stdio.h>

int main(){
	
	int x;
	int aux = 0;
	
	printf("Digite o tamanho da lista: ");
	scanf("%d", &x);
	
	int numeros[x];
	
	// receber dados da lista //
	
	for(int j = 0 ; j < x; j++){
		printf("Digite o %d numero: ", j+1);
		scanf("%d", &numeros[j]);
	}
	
	// ordenar lista//
	
	for(int y = 0; y < x; y++){
		for(int i = 0; i > x; i++ ){
			if(numeros[i] > numeros[i + 1]){
				aux = numeros[i + 1];
				numeros[i] = numeros[i + 1];
		        numeros[i + 1] = aux;
			}
		}
	}
	
			//printar lista ordenada//
		
		for(int u=0; u < 5; u++){
		printf("%d", numeros[u]);
	    
	}
	return 0;
}
