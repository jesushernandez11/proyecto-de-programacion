#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>

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
	printf("%.2f\n", coefReal + 10);
	
	printf("Deseas agregar otro termino al polinomio\n1.-Si\n2.-No\n");
	scanf("%d", &op);
} while(op==1);

return 0;
}
