#include"trace.h"

int potenza(int base, int esponente){	
	#ifdef DEBUG
	TRACE();
	#endif
	int risultato = 1;
	for(int i=0; i<esponente; i++){
		risultato = risultato * base;
	}
	return risultato;
}
