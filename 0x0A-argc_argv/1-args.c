#include <stdio.h>
/**
 * main - prints the number of args passed onto it
 * @argc: number of args
 * @argv: array that contains the program args
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
