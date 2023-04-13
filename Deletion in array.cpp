#include <stdio.h>
main()
{
	int a[5],position,i,value;
	printf("Enter elements: ");
	for (i=0; i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the location where you wish to delete an element: ");
	scanf("%d",&position);
	for (i=position-1; i<5;i++)
	{
		a[i]=a[i+1];
		
	}
	printf("\n Resultant array is: ");
	for (i=0;i<=4;i++)
	{
		printf("\n %d",a[i]);
	}
}
