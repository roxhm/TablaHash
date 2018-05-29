#pragma once 

#include <stdio.h>

typedef struct{

	char* nombre;
	char* simbolo; 
	int numAtomico;
	char* familia; 
	int grupo; 
	int periodo; 
	float masaAtomica;

} info;

struct pareja{
	char* llave; 
	info infoElemQuimico; 
}; 

typedef struct pareja Elem; /* Éste Elem es el que es adaptable según las necesidades del usuario. 
							 * En este caso el Elem consta de una pareja.
							 * La pareja consta de una llave e información asociada a esa llave. 
							 */					

// P R O T O T I P O S 

void ImpElem (Elem); 
void ImpLlave(Elem); 
int EsMenorOIgual (Elem, Elem); 