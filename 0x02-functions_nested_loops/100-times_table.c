#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The number for which the times table is printed
 *
 * Description: This function prints the n times table, starting from 0
 *              up to n times n. If n is greater than 15 or less than 0,
 *              it does not print anything.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int row, col, result;

    for (row = 0; row <= n; row++)
    {
        for (col = 0; col <= n; col++)
        {
            result = row * col;

            if (col == 0)
                _putchar('0');
            else
            {
                _putchar(',');
                _putchar(' ');

                if (result < 10)
                    _putchar(' ');
            }

            if (result < 10)
                _putchar('0' + result);
            else
            {
                _putchar('0' + result / 10);
                _putchar('0' + result % 10);
            }
        }
        _putchar('\n');
    }
}
    
				    
				    
				    
				    
