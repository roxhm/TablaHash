#include <stdio.h> 
#include <stdlib.h> 

#include "Lista.h"

void LlenaElem (Elem*); 
void LlenaLlaveElem (Elem*); 
void LlenaInfoElem (Elem*); 

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
	ptrElem -> infoElemQuimico.nombre = (char*)malloc(10*sizeof(char)); 
	ptrElem -> infoElemQuimico.simbolo = (char*)malloc(3*sizeof(char)); 
	ptrElem -> infoElemQuimico.familia = (char*)malloc(10*sizeof(char));

	printf("Nombre : ");
	scanf("%s", ptrElem -> infoElemQuimico.nombre);
	printf("Símbolo : ");
	scanf("%s", ptrElem -> infoElemQuimico.simbolo); 
	printf("Número atómico : ");
	scanf("%d", &(ptrElem -> infoElemQuimico.numAtomico));
	printf("Familia : ");
	scanf("%s", ptrElem -> infoElemQuimico.familia);
	printf("Grupo : ");
	scanf("%d", &(ptrElem -> infoElemQuimico.grupo)); 
	printf("Periodo : ");
	scanf("%d", &(ptrElem -> infoElemQuimico.periodo)); 
	printf("Masa atómica : ");
	scanf("%f", &(ptrElem -> infoElemQuimico.masaAtomica));   
	printf("\n");
}
