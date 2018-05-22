#pragma once 

#include <stdio.h> 
#include "Lista.h"

typedef struct{
	int M;
	Lista* TablaH; 
} tablaHash, *ptrTablaHash;

//typedef Lista* TablaH; 

//PROTOTIPOS


//prec: cap >=1 
ptrTablaHash iniciaTablaH (int);
//post: TablaH = TablaVacía del tamaño de la capcidad. 



//prec: llv  !E t
void insertaTablaH (TablaH, char*, Elem); 
//post: 

void elemTablaH(TablaH, char*); 

Elem infoTablaH(TablaH, char*);
int estaEnTablaH(TablaH, char*);









/*

TAREA: 

Sistema de información geográfica. (Nombre del país es la llave.) 
Encontrar una representación númerica de la cadea que representa la llave. 
Insertar los elementos en la lista de manera ordenada, puede ser lexicográficamente. 
Tabla Periódica (El Num. atómico es la llave) 

Elem{
	Llave (Cadena)
	Información{}
}

*/ 