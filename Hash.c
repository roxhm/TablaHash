#include "Hash.h"

#include <stdio.h> 


typedef struct{
	int M;
	Lista* TablaH; 
} tablaHash, *ptrTablaHash;



ptrTablaHash iniciaTablaHash (int capacidad)
{
	int i;
	ptrTablaHash t;

	t = (ptrTablaHash)malloc(sizeof(tablaHash)); //Se reserva memoria para el registro de tablaHash llamado t. 
		if(ptrTablaHash == NULL)
			printf("ERROR : Memoria insuficiente para TablaHash. \n");		
	t -> M = capacidad;
	t -> TablaH = (TablaH)malloc(M * sizeof(Lista));
		if(t -> TablaH == NULL)
			printf("ERROR : Memoria insuficiente para TablaH. \n");

	for(i = 0; i < capacidad; i++)
		t -> TablaH[i] = Vacia(); 

	return t;  
}





