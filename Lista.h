#pragma once
#include "ElemL.h"

typedef struct Nodo
{
	Elem dato; 
	struct Nodo *siguiente; 
} *Lista;

// P R O T O T I P O S : 

//Constructoras: 
Lista Vacia ( ); 
Lista Cons ( Elem , Lista ); 

// Observadoras: 
int EsVacia ( Lista ); 
Elem Cabeza ( Lista ); 

//Destructoras: 
Lista Resto ( Lista );

//PROTOTIPOS: 

int NumElem ( Lista ); 
void ImpLista ( Lista ); 
void ImpLista2 ( Lista );
Lista Concat ( Lista , Lista );
Lista Invierte ( Lista );  
Lista InsOrd ( Elem , Lista );
Lista OrdList ( Lista );
// void ImpListaArch ( Lista , FILE * );
