#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: pointer
 */
void print_chessboard(char (*a)[8])
{
	char a[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};

	int i, j;

	for (i = 0; i < 8; i++)
		_putchar('\n');
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
}
