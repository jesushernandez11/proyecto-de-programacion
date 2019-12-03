#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
struct pol{
	int grado;
	int coef;
	struct pol *sig;
};
typedef struct pol tpuntero;
typedef tpuntero *ptrNodoLinea;
struct nodoColumna{
	ptrNodoLinea linea;
	struct nodoColumna *sig;
};
void mostrarLista(ptrNodoLinea cabeza);
void insertarGrado(ptrNodoLinea *cabeza, int grado);
void insertarCoeficiente(ptrNodoLinea *cabeza, float coef);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char grado[5];
	char coeficiente[5];
	int graReal;
	float coefReal;
	int lon, op;
	int valida = 0;
	int i;
	int auxValida=0;
	
do {

	do 
	{
		printf("Ingresa el grado del termino\n");
		scanf("%s", &grado);
		lon = strlen(grado);
		
		for(i=0; i<lon; i++){  //5s5
			if(isdigit(grado[i])==0)
			
				valida = valida + 1;
			else 
				valida = valida;
		}		
		auxValida = valida;
		valida = 0;
		if(auxValida !=0)
			printf("\tERROR\nSolo ingresa numeros enteros\n");
			
	}while(auxValida !=0);
	
	graReal = atoi(grado);
	insertarGrado(&cabeza, graReal);
	printf("%d\n", graReal + 10);
	
	do 
	{
		printf("Ingresa el coeficiente del termino\n");
		scanf("%s", &coeficiente);
		lon = strlen(coeficiente);
		
		for(i=0; i<lon; i++){  //5s5
			if((coeficiente[i]=='.') || (isdigit(coeficiente[i])==1))
			
				valida = valida;
			else 
				valida = valida + 1;
		}		
		auxValida = valida;
		valida = 0;
		if(auxValida != 0)
			printf("\tERROR\nSolo ingresa numeros\n");
			
	}while(auxValida != 0);
	
	coefReal = atof(coeficiente);
	insertarCoeficiente(&cabeza, coefReal);
	printf("%.2f\n", coefReal + 10);
	
	printf("Deseas agregar otro termino al polinomio\n1.-Si\n2.-No\n");
	scanf("%d", &op);
} while(op==1);
mostrarLista(&cabeza);
return 0;
}
void insertarGrado(ptrNodoLinea *cabeza,int grado){
	ptrNodoLinea nuevo;
	nuevo = malloc(sizeof(ptrNodoLinea));
	nuevo->grado = grado;
	nuevo->sig = *cabeza;
	*cabeza = nuevo;
	printf("Agregado correctamente");
}
void insertarCoeficiente(ptrNodoLinea *cabeza, float coef){
	ptrNodoLinea nuevo;
	nuevo = malloc(sizeof(ptrNodoLinea));
	nuevo->coef = coef;
	nuevo->sig = *cabeza;
	*cabeza = nuevo;
	printf("Agregado correctamente");
}
void mostrarLista(ptrNodoLinea cabeza){
	while(cabeza != NULL){
		printf("%4d\n", cabeza->coef);
		printf("%4d\n", cabeza->grado);
		cabeza = cabeza->sig;
	}
}
