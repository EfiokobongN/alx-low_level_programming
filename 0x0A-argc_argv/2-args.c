#include <stdio.h>
/**
 * main - program prints all arguments receives.
 * @argc: arguement count
 * @argv: array of the pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
