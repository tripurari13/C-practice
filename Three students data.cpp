#include<stdio.h>

struct student
{
	int regg_no;
	char name;
	char course;
};
main()
{

	struct student b[3];
	int i;
	for (i=0;i<3;i++)
	{
		printf(" \n enter details of student %d- \n",i+1);
		printf("\n student name: ");
		fflush(stdin);
		scanf("%c",&b[i].name);
		fflush(stdin);
		printf("\n course: ");
		scanf("%c",&b[i].course);
		printf("\n regg no: ");
		scanf("%d",&b[i].regg_no);
	
	}
	for(i=0;i<3;i++)
	{
	printf(" The details of book %d are - \n",i+1);
	printf("\n regg no. = %d",b[i].regg_no);
	printf("\n students name = %d",b[i].name);
	printf("\n course = %d",b[i].course);
	}
}
