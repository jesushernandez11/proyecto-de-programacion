//metodo burbuja
#include <stdio.h>
#include <string.h>

int main (){
	int lista[] ={6, 9, 0, 5, 1};
	
	
	int i, j, aux;
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if (lista[j]>lista[j+1]){
				aux = lista[j];
				lista[j] = lista [j+1];
				lista[j+1] = aux;
			}
		}
	}
	
	printf("El orden de forma ascendente es:");
	for(i=0; i<5; i++)
		printf("%d ", lista[i]);
	
	
	return 0;
}
