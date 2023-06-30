#include <string.h>
#include <stdio.h>

const char* greet(const char *name, const char *owner);

/**
 * main - entry point
 * Description: outputs personalized greeting
 * Return: 0
 */

int main(void)
{
	const char* name = "Joke";
	const char* owner = "Joke";

	const char* greeting = greet(name, owner);
	printf("%s\n",greeting);

	return (0);
}

/**
 * greet - compare two strings
 * @name: pointer to constant character
 * @owner: pointer to constant character
 * Description: check the equality of strings
 * Returns: strings
 */

const char* greet(const char* name, const char* owner)
{
	if (strcmp(name, owner) == 0)
	{
		return ("Hello boss");
	}
	else
	{
		return ("Hello guest");
	}
}
