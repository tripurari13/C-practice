#include <stdio.h342>
main(){
	int a[3][4],b[3][4],i,j;
	printf("Enter array elements:\n");
	for (i=0;i<3;i++)  //rows
	{
		for(j=0;j<4;j++)  //columns
		scanf("%d",&a[i][j]);
	}
	printf("\nArray is:");
	for(i=0;i<3;i++)  //rows
	{
		printf("\n");
		for(j=0;j<4;j++)  //columns
		printf("\t%d",a[i][j]);
	}
	printf("Enter array elements:\n");
	for (i=0;i<3;i++)  //rows
	{
		for(j=0;j<4;j++)  //columns
		scanf("%d",&b[i][j]);
	}
	printf("\nArray is:");
	for(i=0;i<3;i++)  //rows
	{
		printf("\n");
		for(j=0;j<4;j++)  //columns
		printf("\t%d",b[i][j]);
	}
}
