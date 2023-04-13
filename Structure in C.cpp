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
	var1.book_id = 10;
	var1.price = 100.75;
	var1.no_of_pages = 300;
	printf(" The details of Var1 is \n");
	printf(" book id = %d", var1.book_id);
	printf(" book price = %f", var1.price);
	printf(" book pages = %d", var1.no_of_pages);
}
