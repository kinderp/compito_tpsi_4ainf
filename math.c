#include"trace.h"

int somma(int addendo1, int addendo2){
	#ifdef DEBUG
	TRACE();
	#endif
	return addendo1 + addendo2;
}

int differenza(int minuendo, int sottraendo){
	#ifdef DEBUG
	TRACE();
	#endif
	return minuendo - sottraendo;
}

int moltiplicazione(int fattore1, int fattore2){
	#ifdef DEBUG
	TRACE();
	#endif
	return fattore1 * fattore2;
}

int divisione(int dividendo, int divisore){
	#ifdef DEBUG
	TRACE();
	#endif
	return dividendo / divisore;
}
