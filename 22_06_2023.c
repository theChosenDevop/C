#include <stdio.h>

/**
 * print_line - print backlash diagonally
 * @n: input integer
 * Return: void
 */

void print_line(int n)
{
    int i, j;

    n = 5;
    char bang = '#';

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%c", bang);
            }
            else
            {
                print(" "); /*You insert a sym here to see the difference in outpu*/
            }
            printf("\n");
        }
    }
    return (0);
}

/* OR */

void print_line(int n)
{
    int i, j;

    n = 5;
    char bang = '#';

    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                putchar(' ');
            }
            putchar(bang);
            putchar('\n');
        }
    }
    else
    {
        putchar('\n');
    }
    return (0);
}