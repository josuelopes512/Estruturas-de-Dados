/*
Desenvolva um programa C que, baseado no código a seguir, realize as seguintes tarefas:
int a, *b;
i. Leia do usuário um valor a ser atribuído à variável a;
ii. Faça o ponteiro b apontar para a;
iii. Dobre o valor de a, utilizando o ponteiro b.
iv. Aloque nova memória para b;
v. Leia do usuário um valor a ser atribuído à posição de memória apontada por b.
vi. Mostre os valores de a e b na tela.
*/

int main(){
	int a, *b;
	b = &a;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	*b = 2 * a;
	printf("Valor de b: %d\n", *b);
	b = malloc(sizeof(int));
	printf("Digite o valor de  b: ");
	scanf("%d", b);
	printf("Valor de a: %d e b: %d", a, *b);
}

