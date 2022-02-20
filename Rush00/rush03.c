#include <unistd.h>

void	print_col(char a, char b, char l, int x);

void	print_row(char l, int c, int y);

void	rush(int x, int y);

void	rush(int x, int y)
{
	char	letter_1;
	char	letter_2;
	char	col;

	letter_1 = 'A';
	letter_2 = 'C';
	col = 'B';
	if ((x <= 0) || (y <= 0))
	{
		write(1, "", 1);
	}
	else if (y == 1)
	{
		print_col(letter_1, letter_2, col, x);
	}
	else
	{
		print_col(letter_1, letter_2, col, x);
		print_row(col, x, y);
		print_col(letter_1, letter_2, col, x);
	}	
}