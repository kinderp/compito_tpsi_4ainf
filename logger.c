#include<stdio.h>
#include"logger.h"

extern int operando1_[BUF];
extern int operando2_[BUF];
extern int risultato_[BUF];
extern char operazione_[BUF];



void logger(int iterazioni){
	printf("***************************\n\n");
	for(int i=0; i<iterazioni; i++){
		printf("%d %c %d = %d\n", operando1_[i], operazione_[i], operando2_[i], risultato_[i]);
	}
	printf("***************************\n\n");
}
