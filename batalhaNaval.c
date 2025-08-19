#include <stdio.h>

int main()
{
	// Criando a matriz do tabuleiro
	int tabuleiro[10][10] = {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

	printf(" TABULEIRO BATALHA NAVAL\n\n");

	printf("   ");
	for (char c = 'A'; c <= 'J'; c++)
	{
		printf("%c ", c);
	}
	printf("\n");

	// Definindo a posição do navio 1
	int linha_inicio = 1;
	int coluna_inicio = 2;
	for (int i = 0; i < 3; i++)
	{
		tabuleiro[linha_inicio + i][coluna_inicio] = 3;
	}

	// Definindo a posição do navio 2
	linha_inicio = 5;
	coluna_inicio = 5;
	for (int j = 0; j < 4; j++)
	{
		tabuleiro[linha_inicio][coluna_inicio + j] = 3;
	}

	// Imprimindo o tabuleiro completo
	for (int i = 0; i < 10; i++)
	{
		printf("%2d ", i + 1);

		for (int j = 0; j < 10; j++)
		{
			printf("%d ", tabuleiro[i][j]);
		}
		printf("\n");
	}

	return 0;
}