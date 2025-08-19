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

	// Navio 1
    int navio1[3] = {3, 3, 3};
    // Navio 2
    int navio2[4] = {3, 3, 3, 3};

    // Definindo a posição do navio 1
    int linha_inicio1 = 1;
    int coluna_inicio1 = 2;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_inicio1 + i][coluna_inicio1] = navio1[i];
    }

    // Definindo a posição do navio 2
    int linha_inicio2 = 5;
    int coluna_inicio2 = 5;

    for (int j = 0; j < 4; j++) {
        tabuleiro[linha_inicio2][coluna_inicio2 + j] = navio2[j];
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