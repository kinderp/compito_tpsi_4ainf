#include<stdio.h>
#include"math.h"
#include"pow.h"
#include"trace.h"
#include"logger.h"

#define BUF 10

int operando1_[BUF] = {0};
int operando2_[BUF] = {0};
int risultato_[BUF] = {0};
char operazione_[BUF] = {'\0'};

int main(void){
	#ifdef DEBUG
	TRACE();
	#endif

	int risultato, iterazioni = 0;
	int operando1, operando2, base, esponente;
	char operazione;
	while(1){
		printf("\n");
		printf("+. Somma\n");
		printf("*. Moltiplicazione\n");
		printf("-. Differenza\n");
		printf("/. Divisione\n");
		printf("^. Potenza\n");
		printf("#. Logger\n");
		printf("!. Esci\n");
		printf("\n\n");
		scanf(" %c", &operazione);


		if(operazione == '!') return 0;

		if(operazione == '#'){
			logger(iterazioni);
			continue;
		} else {	
			if(operazione=='^'){
				printf("Inserisci la base\n");
				scanf("%d", &base);

				printf("Inserisci l'esponente\n");
				scanf("%d", &esponente);
			} else {
				printf("Inserisci il primo operando\n");
				scanf("%d", &operando1);

				printf("Inserisci il secondo operando\n");
				scanf("%d", &operando2);
			}
		}

		switch(operazione){
			case '+':
				risultato = somma(operando1, operando2);	
				printf("%d + %d = %d\n", operando1, operando2, risultato);
				break;
			case '*':
				risultato = moltiplicazione(operando1, operando2);
				printf("%d * %d = %d\n", operando1, operando2, risultato);
				break;
			case '-':
				risultato = differenza(operando1, operando2);
				printf("%d - %d = %d\n", operando1, operando2, risultato);
				break;
			case '/':
				risultato = divisione(operando1, operando2);
				printf("%d / %d = %d\n", operando1, operando2, risultato);
				break;
			case '^':
				risultato = potenza(base, esponente);
				printf("%d^%d = %d\n", base, esponente, risultato);
				operando1 = base;
				operando2 = esponente;
				break;
			case '!':
				return 0;
			default:
				printf("Operazione non riconosciuta\n");
		}
		operando1_[iterazioni] = operando1;
		operando2_[iterazioni] = operando2;
		risultato_[iterazioni] = risultato;
		operazione_[iterazioni] = operazione;
		iterazioni++;
	}
	return 0;
}
