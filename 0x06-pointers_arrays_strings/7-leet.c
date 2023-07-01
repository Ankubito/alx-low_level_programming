#include "main.h"

/**
 * leet - encode a string into 1337 code
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *n)
{
		int a, b;

		char s1[] = "aAeEoOtTIL";
		char s2[] = "4433007711";

		for (a = 0; n[a] != '\0'; a++)
		{
			for (b = 0; b < 10; b++)
			{
				if (n[a] == s1[b])
				{
					n[b] = s2[b];
				}
			}
		}
		return (n);
}