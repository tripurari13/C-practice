#include <stdio.h>
main()
{
	FILE*fp;
	int n;
	fp = fopen("Mia.txt","w");
	printf("Enter any digit: ");
	scanf("%d",&n);
	putw(n,fp);
	fclose(fp);
	fp=fopen("Mia.txt","r");
	n=getw(fp);
	printf("\n Data Stored in the file is %d",n);
	fclose(fp);
}
