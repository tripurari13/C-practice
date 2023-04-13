#include <stdio.h>
#include <conio.h>
int main()
{
	char ch, ch1;
	FILE *ptr;
	ptr=fopen("text2.txt","w");
	printf("enter text and press . to end");
	while(ch!='.')
	{
		ch=getche();
		fputc(ch,ptr);
	}
	printf("record saved \n");
	fclose(ptr);
	ptr=fopen("text2.txt","r");
	printf("the contents of the file are \n");
	while((ch1=fgetc(ptr))!=EOF)
	{
		printf("%c",ch1);
	}
	fclose(ptr);
}
