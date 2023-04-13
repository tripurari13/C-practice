#include <stdio.h>
main()
{
	char x;
	FILE *fp;
	fp=fopen("Sins.txt","w");
	printf("Enter any keyword from keyboard \n");
	x=getchar();
	putc(x,fp);
	fclose(fp);
}
