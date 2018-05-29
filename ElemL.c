#include "ElemL.h" 

#include <stdio.h>
#include <string.h> 

// F U N C I O N E S

void ImpElem (Elem elemQuimico){
	ImpLlave(elemQuimico); 
	printf( "NOMBRE : %s\n"
			"SÍMBOLO : %s\n"
			"NÚM. ATÓMICO : %d\n"
			"FAMILIA : %s\n"
			"GRUPO : %d\n"
			"PERIODO : %d\n"
			"MASA ATÓMICA : %f\n\n", 
			elemQuimico -> infoElemQuimico -> nombre, 
			elemQuimico -> infoElemQuimico -> simbolo,
			elemQuimico -> infoElemQuimico -> numAtomico, 
			elemQuimico -> infoElemQuimico -> familia,
			elemQuimico -> infoElemQuimico -> grupo,
			elemQuimico -> infoElemQuimico -> periodo,
			elemQuimico -> infoElemQuimico -> masaAtomica);
}

void ImpLlave(Elem elemQuimico){ printf("LLAVE : %s\n\n", elemQuimico -> llave); }

int EsMenorOIgual (Elem elemQuimico_1, Elem elemQuimico_2)
{
	return strcasecmp(elemQuimico_1 -> llave, elemQuimico_2 -> llave) <= 0;  
}