#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct polinomio{
	int grado;
	float coeficiente;
	polinomio *siguiente;
};
	polinomio *serie=NULL;
	polinomio *serie2=NULL;
	polinomio *pol1, *pol2;
	
void agregarPol1(polinomio *&, int, float);
void agregarPol2(polinomio *&, int, float);
void datosPol1();
void datosPol2();
//void mostrarElementos1(polinomio *&,  void);

int cont1=0;
int cont2 = 0;

int main (){
	datosPol1();
	datosPol2();
	printf("%d", cont1);
//	mostrarElementos1(serie, datosPol1);
	return 0;
}
void datosPol1(){
	int p1, op;
	float p2;
	printf("Polinomio 1.\n");
	do {
	printf("Ingresa el grado del polinomio\n");
	scanf("%d", &p1);
	printf("Ingresa el coeficiente del polinomio\n");
	scanf("%f", &p2);
	
	agregarPol1(serie, p1, p2);
	
	printf("Deseas agregas otro termino.\n1.-Si\n2.-No\n");
	scanf("%d", &op);
	cont1 = cont1 +1;
}	while(op==1);
	
}

void datosPol2(){
	int p1, op;
	float p2;
	
	
	printf("Polinomio 2.\n");
	do {
	printf("Ingresa el grado del polinomio\n");
	scanf("%d", &p1);
	printf("Ingresa el coeficiente del polinomio\n");
	scanf("%f", &p2);
	
	agregarPol2(serie2, p1, p2);
	
	printf("Deseas agregas otro termino.\n1.-Si\n2.-No\n");
	scanf("%d", &op);
	
	cont2 = cont2 +1;
}	while(op==1);
	
}
void agregarPol1(polinomio *&serie, int p1, float p2){
	pol1 = (polinomio*)malloc(sizeof(polinomio));
	pol1->grado= p1;
	pol1->coeficiente = p2;
	pol1->siguiente = serie;
	serie = pol1;
}

void agregarPol2(polinomio *&serie, int p1, float p2){
	pol2 = (polinomio*)malloc(sizeof(polinomio));
	pol2->grado= p1;
	pol2->coeficiente = p2;
	pol2->siguiente = serie;
	serie = pol1;
}

void mostrarElementos1(polinomio *&serie, int p1, float p2){
	polinomio *aux;
	aux = serie;
	p1 = aux->grado;
	p2 = aux->coeficiente;
	serie = aux->siguiente;
	
}

/*void mostrarElem(polinomio *&serie, void datosPol1){
	int i;
	int nuevo[cont1];
	for(i=0; i<cont1; i++)
		while (serie != NULL){
			scanf("%d", nuevo[i]);
			printf("%d", nuevo[i]);
		
	}

}
*/
