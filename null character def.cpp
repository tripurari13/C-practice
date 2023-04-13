#include <stdio.h>
main()
{
	FILE *fp;
	char xy[50], ab[50];
	int i =0;
	printf("Enter any string");
	gets(xy);
	fp= fopen("Mona.txt","w");
	fputs(xy,fp);
	fclose(fp);
	fp=fopen("Mona.txt","r");
	printf("\n Entered string is \n");
	if(fgets(ab,50,fp)!='\0')
	{
		while (ab[i]!='\0')
		{
			putchar(ab[i]);
			i++;
		}
	}
	fclose(fp);
}
