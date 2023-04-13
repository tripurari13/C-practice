#include <stdio.h>
struct book
{
	int book_id;
	float price;
	int no_of_pages;	
};
main()
{
	struct book b[3];
	int i;
	for (i=0; i<3;i++)
	{
		printf("Enter details of book %d- \n", i+1);
		printf("\nEnter id: ");
		scanf("%d", &b[i].book_id);
		printf("\nEnter price: ");
		scanf("%f",&b[i].price);
		printf("\nEnter no of pages:  ");
		scanf("%d",&b[i].no_of_pages);
	}
	for (i=0;i<3;i++)
	{
		printf("Details of book %d are - \n", i+1);
		printf("\nBook id: %d", &b[i].book_id);
		printf("\nPrice : %f",&b[i].price);
		printf("\nNo of pages: %d",&b[i].no_of_pages );
	}
		
	}

