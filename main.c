#include <stdio.h> 
#include <stdlib.h> 

#include "Lista.h"

int main()
{
	Elem e1; 
	LlenaElem(&e1); 

	ImpElem(e1); 

	return 0; 
}


void LlenaElem(Elem *ptrElem)
{
	printf("Ingrese los siguientes datos : \n\n");
	LlenaLlaveElem(ptrElem); 
	LlenaInfoElem(ptrElem);
	printf("\n"); 
	return; 
}

void LlenaLlaveElem(Elem *ptrElem)
{
	ptrElem -> llave = (char*)malloc(10*sizeof(char)); 
	printf("Llave : \n");
	scanf("%s", ptrElem -> llave); 
}

void LlenaInfoElem(Elem *ptrElem)
{
	ptrElem -> infoElemQuimico -> nombre = (char*)malloc(10*sizeof(char)); 
	ptrElem -> infoElemQuimico -> simbolo = (char*)malloc(3*sizeof(char)); 
	ptrElem -> infoElemQuimico -> familia = (char*)malloc(10*sizeof(char));

	printf("Nombre : ");
	scanf("%s", ptrElem -> infoElemQuimico -> nombre);
	printf("\nSímbolo : ");
	scanf("%s", ptrElem -> infoElemQuimico -> simbolo); 
	printf("\nNúmero atómico : ");
	scanf("%d", &(ptrElem -> infoElemQuimico -> numAtomico));
	printf("\nFamilia : ");
	scanf("%s", ptrElem -> infoElemQuimico -> familia);
	printf("\nGrupo : ");
	scanf("%d", &(ptrElem -> infoElemQuimico -> grupo)); 
	printf("\nPeriodo : ");
	scanf("%d", &(ptrElem -> infoElemQuimico -> periodo)); 
	printf("\nMasa atómica : ");
	scanf("%f", &(ptrElem -> infoElemQuimico -> masaAtomica));   
	printf("\n");
}



	/* int *ptrArregloDeNumeros; 

	int i; 

	ptrArregloDeNumeros = (int*)malloc(5*sizeof(int)); 
	if(ptrArregloDeNumeros == NULL)
		printf("ERROR : Memoria insuficiente. \n");

	for(i = 0; i < 5; i++)
		scanf("%d", &ptrArregloDeNumeros[i]); 

	printf("\n");

	for(i = 0; i < 5; i++)
		printf("%d\n", ptrArregloDeNumeros[i]);


	return 0; 
}
*/ 