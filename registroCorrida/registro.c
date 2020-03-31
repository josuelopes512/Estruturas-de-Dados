#include <stdio.h>
#include <stdlib.h>
#include "registro.h"

struct RegistroCorrida{
	float freq, temp, elev;
};

TRegistroCorrida *criar(){
	TRegistroCorrida* rc = (TRegistroCorrida *)malloc(sizeof(TRegistroCorrida));
	return rc;
}

void listar(TRegistroCorrida *registros, int QTD){
	int i;
	
	for(i = 0; i < QTD; i++){
		printf("Frequencia %d: ", i+1);
		scanf("%f", &registros[i].freq);
		fflush(stdin);
		printf("Temperatura %d: ", i+1);
		scanf("%f", &registros[i].temp);
		fflush(stdin);
		printf("Elevacao do terreno %d: ", i+1);
		scanf("%f", &registros[i].elev);
		fflush(stdin);
		printf("\n");
	}
}


void ListarRegistroCorrida(TRegistroCorrida *rc, int n, int info){
	int i;
	switch (info){
		case 1: printf("\nFrequencias\n"); 
			for(i = 0;i < n; i++){
				printf("%f\n", rc[i].freq); 
			}
	break;
	
	case 2: printf("\nTemperatura\n"); 
		for(i = 0;i < n; i++){
			printf("%f\n", rc[i].temp); 
		}
	break;
	case 3: printf("\nElevacao\n"); 
		for(i = 0;i < n; i++){
			printf("%f\n", rc[i].elev); 
			} 
	break;
	
	default: 
		printf("Valor Invalido");
	}
}

float CalculaMedia(TRegistroCorrida *rc, int n){
	int i;
	float soma;
	for(i = 0; i < n; i++){ 
		soma = soma + rc[i].temp;
	}
	return soma/n;
}

float CalculaMaior(TRegistroCorrida *rc, int n){
	int i;
	float maior = 0;
	for(i = 0; i < n; i++){ 
		if(rc[i].freq > maior){
			maior = rc[i].freq;
		}
	}
	return maior;
}

