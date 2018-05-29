#include"Lista.h"

#include <stdio.h>
#include <stdlib.h>


//F U N C I O N E S: 

Lista Vacia ( ) { return NULL; }

Lista Cons ( Elem e, Lista l )
{
	Lista t = ( Lista ) malloc ( sizeof ( struct Nodo ) ); 
	t -> dato = e; 
	t -> siguiente = l; 
	return t; 
}

int EsVacia ( Lista l ) { return l == NULL; }
Elem Cabeza ( Lista l ) { return l -> dato; }
Lista Resto ( Lista l ) { return l -> siguiente; }


// FUNCIONES:

int NumElem ( Lista a )
{
	if ( EsVacia( a ) )
		return 0; 
	else 
		return 1 + NumElem( Resto( a ) ); 
}

void ImpLista( Lista a )
{
	if ( !EsVacia( a ) )
	{
		ImpElem( Cabeza( a ));
		ImpLista( Resto( a )); 
	}
}

void ImpLista2( Lista a )
{
	if ( !EsVacia( a ))
	{
		ImpLista2( Resto( a )); 
		ImpElem( Cabeza( a ));
	}
	
} 

Lista Concat ( Lista a, Lista b )
{
	if ( EsVacia( a ))
		return b; 
	else 
		return Cons( Cabeza( a ), Concat( Resto( a ), b )); 
}

Lista Invierte ( Lista a )
{
	if ( EsVacia( a ))
		return a; 
	else 
		return Concat( Invierte( Resto( a )), Cons(Cabeza( a ), Vacia()));
}

Lista InsOrd ( Elem e, Lista a )
{
	if ( EsVacia( a ))
		return Cons( e, Vacia()); 
	else 
		if ( EsMenorOIgual( e, Cabeza( a )))
			return Cons( e, a ); 
		else 
			return Cons(Cabeza( a ),InsOrd( e, Resto( a )));
}

Lista OrdList ( Lista a )
{
	if ( EsVacia( a ))
		return a;
	else 
		return InsOrd( Cabeza( a ), OrdList ( Resto ( a )));
}

/* 

void ImpListaArch ( Lista a, FILE * out )
{
	if ( !EsVacia( a ) )
	{
		ImpElemArch( Cabeza( a ));
		ImpListaArch( Resto( a )); 
	}
} 
*/