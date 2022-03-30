#include <stdio.h>

/**
 * find_root - find square root of n, starting from the smallest possible, 0
 * @n: int to find root
 * @root: possible root
 * Return: natural square root of n
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);
	else
		return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: int to find root
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (find_root(n, 0));
}
