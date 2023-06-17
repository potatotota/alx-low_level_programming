#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of a char : %lu bytes\n", (size_t)sizeof(a));
printf("size of a int : %lu bytes\n", (size_t)sizeof(b));
printf("size of a long int : %lu bytes\n", (size_t)sizeof(c));
printf("size of a long long int : %lu bytes\n", (size_t)sizeof(d));
printf("size of a float : %lu bytes\n", (size_t)sizeof(f));
return(0);
}
