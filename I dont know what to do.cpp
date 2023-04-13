#include <stdio.h>
main()
{
	FILE*fp1;
	char name[10];
	int roll;
	fp1=fopen("Rakesh.txt","w");
	printf("\n Enter roll number and name of students");
	scanf("%d%s", &roll, name);
	fprintf(fp1,"%d %s", roll,name);
	fclose(fp1);
	fp1=fopen("Rakesh.txt","r");
	fscanf(fp1,"%d %s",&roll,name);
	printf("\n Entered data is \n");
	printf("%d %s",roll,name);
	fclose(fp1);
}
