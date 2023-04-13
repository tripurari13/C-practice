#include <stdio.h>
struct book
{
	int book_id;
	float price;
	int no_of_pages;	
} var1;
main()
{
	struct book var2;
	printf("Enter details of Book_id, price, no of pages: ");
	scanf(" %d%f%d", &var1.book_id,&var1.price, &var1.no_of_pages);

	printf(" The details of Var1 is \n");
	printf(" book id = %d", var1.book_id);
	printf(" book price = %f", var1.price);
	printf(" book pages = %d \n", var1.no_of_pages);
	
	var2=var1;
	//printf("Enter details of Book_id, price, no of pages: ");
	//scanf(" %d%f%d", &var2,&var2, &var2);

	printf(" The details of Var2 is \n");
	printf(" book id = %d",var2.book_id);
	printf(" book price = %f",var2.price);
	printf(" book pages = %d",var2.no_of_pages);
}
