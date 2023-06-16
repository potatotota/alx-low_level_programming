#include<stdio.h>
/**
 * main - A program that print the line using printf function
 * return : 0 (right)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("size of the existing char : %lu bytes\n",(unsigned long)sizeof (a));
	printf("size of the existing int : %lu bytes\n",(unsigned long)sizeof (b));
	printf("size of the existing long int : %lu bytes\n",(unsigned long)sizeof (c));
	printf("size of the existing long long  int : %lu bytes\n",(unsigned long)sizeof (d));
	printf("size of the existing float : %lu bytes\n",(unsigned long)sizeof (f));
}
