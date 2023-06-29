#include <stddef.h>
#include <stdio.h>

int find_smallest_int(const int array[], size_t len);

/**
 * main - the entry point
 * Description: invokes the find_smallest_int function
 * Returns: the smallest value
 */

int main()
{
	int array[] = {34, 15, 88, 2};
	int smallest = find_smallest_int(array, 4);

	printf("The smallest integer is: %d\n", smallest);

	return (0);
}

/**
 * find_smallest_int: compares each integers to get smallest value
 * @array: integer array
 * @len: number of integers in an array
 * Return: smallest
 */

int find_smallest_int(cont int array[], size_t len)
{
	size_t i;

	int smallest = array[0];
	i = 1;

	while (i < len)
	{
		if (array[i] < smallest)
		{
			smallest = array[i];
		}
		i++;
	}

	return (smallest);
}
