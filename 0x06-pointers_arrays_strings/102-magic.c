#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
 * main - main entry point
 * Remember:
 * _You are not allowed to use a
 * _You are not allowed to modify p
 * _Only one statement
 * _You are not allowed to code anything
 * else than this line of code
 */
	*(p + 5) = 98;
/* ...so that this prints 98\n */
		printf("a[2] = %d\n", a[2]);
return (0);
}
