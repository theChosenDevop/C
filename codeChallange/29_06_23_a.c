#include <stdio.h>

unsigned rental_car_cost(unsigned d);

/**
 * main - entry point
 * Description: car rental cost per day
 * Return: 0.
 */

int main()
{
	int rental_cost;
	int day;

	day = 9;
	rental_cost = rental_car_cost(day);

	printf("The cost renting a car for %d day(s) is: %d\n", day, rental_cost);

	return(0);
}

/**
 * rental_car_cost - cost of renting a car for each day
 * @d: unsigned day
 * Return: total
 */
unsigned rental_car_cost(unsigned d)
{
	unisgned total = d * 40;

	if (d >= 7)
	{
		total -= 50;
	}
	else if (d >= 3)
	{
		total -= 20;
	}
	else {
		total;
	}

	return (total);
}
