/*
Inspirado(a) na primeira atividade, desenvolva um programa C com os seguintes requisitos.
TIPOS DE DADOS (STRUCT):
- RegistroCorrida, com frequência cardíaca, temperatura corporal e a elevação do terreno;
FUNÇÕES:
- ListarRegistroCorrida, que recebe um vetor de RegistroCorrida, a quantidade de registros e o número de informação a ser exibida (1, 2 ou 3). A função mostra na tela a lista de frequências cardíacas do vetor se este último parâmetro for 1, a lista de temperaturas corporais do vetor se o parâmetro for 2 e a lista de elevações de terreno do vetor se o parâmetro for 3.
- CalculaMedia, que recebe um vetor de números e a sua quantidade, e retorna a média dos seus valores.
- CalculaMaior, que recebe um vetor de números e a sua quantidade, e retorna o seu maior valor.
ENTRADA:
- Leia do usuário os 12 valores de frequência cardíaca, temperatura corporal e a elevação do terreno;
SAÍDA:
- Listagem das frequências cardíacas;
- Listagem das temperaturas corporais;
- Listagem das elevações de terreno;
- A média da sua temperatura corporal;
- A maior frequência cardíaca registrada;
- A diferença de elevação de terreno final e inicial.

*/

#include <stdio.h>
#include <stdlib.h>
#define QTD 12

struct RegistroCorrida{
	float freq;
	float temp;
	float elev;
};
typedef struct RegistroCorrida RC;
void ListarRegistroCorrida(RC rc[QTD], int n, int info){
	int i;
	switch (info){
		case 1: printf("\nFrequencias\n"); for(i = 0;i < n; i++){printf("%f\n", rc[i].freq); } break;
		case 2: printf("\nTemperatura\n"); for(i = 0;i < n; i++){printf("%f\n", rc[i].temp); } break;
		case 3: printf("\nElevacao\n"); for(i = 0;i < n; i++){printf("%f\n", rc[i].elev); } break;
		default: printf("Valor Invalido");			
	}
}
float CalculaMedia(RC rc[QTD], int n){
	int i;
	float soma;
	for(i = 0; i < n; i++){	soma = soma + rc[i].temp;}
	return soma/n;
}

float CalculaMaior(RC rc[QTD], int n){
	int i;
	float maior = 0;
	for(i = 0; i < n; i++){	if(rc[i].freq > maior){maior = rc[i].freq;}	}
	return maior;
}
int main(int argc, char *argv[]){
	int i;
	RC reg, *registros;
	registros = malloc(QTD*sizeof(struct RegistroCorrida));
	printf("Digite os dados: \n");
	for(i = 0; i < QTD; i++){
		printf("Frequencia: ");
		scanf("%f", &registros[i].freq);
		fflush(stdin);
		printf("Temperatura: ");
		scanf("%f", &registros[i].temp);
		fflush(stdin);
		printf("Elevacao do terreno: ");
		scanf("%f", &registros[i].elev);
		fflush(stdin);
	}
	ListarRegistroCorrida(registros, QTD, 1);
	ListarRegistroCorrida(registros, QTD, 2);
	ListarRegistroCorrida(registros, QTD, 3);
	
	printf("\nMedia Temp: %.1f", CalculaMedia(registros, QTD));
	printf("\nMaior Freq: %.2f", CalculaMaior(registros, QTD));
	return 0;
}
