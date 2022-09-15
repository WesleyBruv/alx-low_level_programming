#include "main.h"

/**
 * print_square - Square
 *
 * @size: parameter
 *
 * Description: size of the square
 *
 * Return: returns nothing
 */
void print_square(int size)
{
        int x;
        int y;

        if (size > 0)
        {
                for (x = size; x > 0; x--)
                {
                        for (y = size; y > 0; y--)
                        {
                                _putchar('#');
                        }
                        _putchar('\n');
                }
        }
        else
        {
                _putchar('\n');
        }
}
