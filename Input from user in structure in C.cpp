#include <stdio.h>
struct book
{
	int book_id;
	float price;
	int no_of_pages;	
} var1;
main()
{
	printf("Enter details of Book_id, price, no of pages: ");
	scanf(" %d%f%d", &var1.book_id,&var1.price, &var1.no_of_pages);

	printf(" The details of Var1 is \n");
	printf(" book id = %d", var1.book_id);
	printf(" book price = %f", var1.price);
	printf(" book pages = %d", var1.no_of_pages);
}
