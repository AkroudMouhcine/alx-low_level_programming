#include "main.h"

i
int check_prime(int n, int i);
/**
  * is_prime_number - funct that return 1 if the input int is a prime num
  * @n: the number cheched
  *
  * Return: 0 or 1
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
  * check_prime - func that returns 1 if the input integer is a prime num
  * @n: the number cheched
  * @i: check if i is divisible by n
  * Return: 0 or 1
  */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i - 1));
}
