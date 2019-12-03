#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>

typedef struct _polinomio  polinomio;

struct _polinomio{
	int grado;
	float coeficiente;
	polinomio *siguiente;
};

	polinomio *serie=NULL;
	polinomio *serie2=NULL;
	polinomio *pol1, *pol2;
	
void agregarPol1(polinomio *serie, int p1, float p2);
void mostrarElementos1(polinomio *serie, int p1, float p2);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char grado[5];
	char coeficiente[5];
	int graReal;
	float coefReal;
	int lon, op;
	bool valida = false;
	int i;
	bool auxValida;
	
	
do {

	do 
	{
		printf("Ingresa el grado del termino\n");
		scanf("%s", &grado);
		lon = strlen(grado);
		
		for(i=0; i<lon; i++){  //5s5
			if(isdigit(grado[i])==0)
			
				valida = true;
			else 
				valida = false;
		}		
		auxValida = valida;
		valida = false;
		if(!auxValida)
			printf("\tERROR\nSolo ingresa numeros enteros\n");
			
	}while(auxValida!=0);
	
	graReal = atoi(grado);
	printf("%d\n", graReal + 10);
	
	do 
	{
		printf("Ingresa el coeficiente del termino\n");
		scanf("%s", &coeficiente);
		lon = strlen(coeficiente);
		
		for(i=0; i<lon; i++){  //5s5
			if((coeficiente[i]=='.') || (isdigit(coeficiente[i])==1))
			
				valida = true;
			else 
				valida = false;
		}		
		auxValida = valida;
		valida = false;
		if(!auxValida)
			printf("\tERROR\nSolo ingresa numeros\n");
			
	} 
	while(!auxValida);
	coefReal = atof(coeficiente);
	printf("%.2f", coefReal + 10);
	
		agregarPol1(serie, graReal, coefReal);
	printf("%d %f", pol1->grado, pol1->coeficiente);
	
	printf("Deseas agregar otro termino al polinomio\n1.-Si\n2.-No\n");
	scanf("%d", &op);
} while(op==1);
	
	while(serie!=NULL){
		mostrarElementos1(serie, graReal, coefReal);
		if(serie != NULL){
			printf("%d ,", graReal);
			printf("%f , ", coefReal);
		}
		else {
		
			printf("%d. ", graReal);
			printf("%f. ", coefReal);
		}
	}
	return 0;
}

void agregarPol1(polinomio *serie, int p1, float p2){
	pol1 = (polinomio*)malloc(sizeof(polinomio));
	pol1->grado= p1;
	pol1->coeficiente = p2;
	pol1->siguiente = serie;
	serie = pol1;
}

void mostrarElementos1(polinomio *serie, int p1, float p2){
	polinomio *aux;
	aux = serie;
	p1 = aux->grado;
	p2 = aux->coeficiente;
	serie = aux->siguiente;
	free(aux);
}
