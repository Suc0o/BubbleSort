#include <stdio.h>

int main() {
    int tam;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tam);

    int lista[tam];
    for (int i = 0; i < tam; i++) {
        printf("Digite o %d numero da lista: ", i + 1);
        scanf("%d", &lista[i]);
    }

    for (int i = 1; i < tam; i++) {
        int c = i - 1;
        int p = lista[i];
        while (c >= 0 && lista[c] > p) {
            lista[c + 1] = lista[c];
            c--;
        }
        lista[c + 1] = p;
    }

    for (int i = 0; i < tam; i++) {
        printf("O %d numero da lista e: %d\n", i + 1, lista[i]);
		}
return 0;
}
		
