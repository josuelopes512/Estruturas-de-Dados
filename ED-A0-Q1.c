/*
Ao final dos seus treinos, um maratonista possui algumas informações registradas em seu smartwatch. Basicamente, a cada 5min, o relógio registra a sua frequência cardíaca, sua temperatura corporal e a elevação do terreno. Ele gostaria de um programa onde ele pudesse digitar esses os dados para avaliação, para um treino de 1h. Desenvolva um programa C com os seguintes requisitos.
ENTRADA:
- Leia do usuário os 12 valores de frequência cardíaca, temperatura corporal e a elevação do terreno, registrados ao longo de 1h de treino.
SAÍDA:
- Listagem das frequências cardíacas;
- Listagem das temperaturas corporais;
- Listagem das elevações de terreno;
- A média da sua temperatura corporal;
- A maior frequência cardíaca registrada;
- A diferença de elevação de terreno final e inicial.
*/

#include<stdio.h>
#define QTD 12
int main(){
	int i;
	float freq[QTD], temp[QTD], terreno[QTD], somaTemp, maiorFreq, diferTerreno, media;
	
	for(i = 0; i < QTD; i++){ printf("Frequencia %d:  ", i+1); scanf("%f", &freq[i]); fflush(stdin); }
	for(i = 0; i < QTD; i++){ printf("Temperaturas %d: ", i+1); scanf("%f", &temp[i]); fflush(stdin); }
	for(i = 0; i < QTD; i++){ printf("Terrenos %d: ", i+1); scanf("%f", &terreno[i]); fflush(stdin); }
	for(i = 0; i < QTD; i++){ somaTemp = somaTemp + temp[i]; }
	media = somaTemp / QTD;
	printf("\nMedia Temperatura: %.1f\n", media);
	printf("\n\nFrequencias: \n");
	for(i = 0; i < QTD; i++){ printf("%f\n", freq[i]); }
	printf("\n\nTemperaturas: \n");
	for(i = 0; i < QTD; i++){ printf("%f\n", temp[i]); }
	printf("\n\nTerrenos: \n");
	for(i = 0; i < QTD; i++){ printf("%f\n", terreno[i]); }
	for(i = 0; i < QTD; i++){ if(freq[i] > freq[QTD]){ maiorFreq = freq[i]; } }
	diferTerreno = terreno[QTD-1] - terreno[0];
	if(diferTerreno < 0){ diferTerreno = diferTerreno * (-1); }
	printf("\nDiferenca do Terreno: %f\n", diferTerreno);
}
