#include <stdio.h>
struct abc
{
	int b;
	char c;
	
}__attribute__ ((packed)) s;
int main()
{
	printf("%d", sizeof(s));
}
