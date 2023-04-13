#include <stdio.h>
main()
{
	int a[5],position,i,value;
	printf("Enter elements: ");
	for (i=0; i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the location where you wish to insert an element: ");
	scanf("%d",&position);
	printf("\n Enter the value to insert: ");
	scanf("%d",&value);
	for (i=3; i>=position-1;i--)
	{
		a[i+1]=a[i];
		
	}
	a[position -1]=value;
	printf("\n Resultant array is: ");
	for (i=0;i<=4;i++)
	{
		printf("\n %d",a[i]);
	}
}
