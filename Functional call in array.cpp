#include <stdio.h>
void disp( int[]);
main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	disp(a);
}
void disp(int b[])
{
	for (int i=0;i<10;i++)
	printf(" \n %d",b[i]);
}
