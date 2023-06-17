#include <stdio.h>
/**

Main - A program that print the line using printf function
Return : 0 (right)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of a char : %zu bytes\n", (size_t)sizeof(a));
printf("size of a int : %zu bytes\n", (size_t)sizeof(b));
printf("size of a long int : %zu bytes\n", (size_t)sizeof(c));
printf("size of a long long int : %zu bytes\n", (size_t)sizeof(d));
printf("size of a float : %zu bytes\n", (size_t)sizeof(f));
return(0);
}
