#include<stdio.h>
main()
{
	int loc=0, key, beg=0,last=9,mid,i;
	int a[10]={2,4,6,8,10,12,37,45,68,89};
	printf("\nArray elements are: ");
	for(i=0;i<10;i++)
	printf(" %d",a[i]);
	
	
	printf("\nInteger value to search in sorted array: ");
	scanf("%d",&key);
	while(beg<=last){
		mid=(beg+last)/2;
		if (a[mid]==key)
		{
			loc=mid;
			break;
			
		}
		else if(a[mid]>key)
		last =mid-1;
		else if (a[mid]<key)
		beg =mid +1;
		
	}
	if (loc!=0)
		 printf("element found at %d",loc+1);
	else
		printf("Element not found");
}
