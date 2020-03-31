#include <stdio.h>
#include <stdlib.h>
#include "registro.h"
const int QTD = 3;


int main(int argc, char *argv[]){
	int i;

	TRegistroCorrida *registros = criar();
	
	listar(registros, QTD);
	
	ListarRegistroCorrida(registros, QTD, 1);
	ListarRegistroCorrida(registros, QTD, 2);
	ListarRegistroCorrida(registros, QTD, 3);
	printf("\nMaior Frequencia: %.2f", CalculaMaior(registros, QTD));
	printf("\nMedia Temperatura: %.1f", CalculaMedia(registros, QTD));
}

