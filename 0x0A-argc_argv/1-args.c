#include <stdio.h>
/**
 * main - prints  number of arguenments
 * @argc: arguemnet make count
 * @argv: array of the pointer to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
