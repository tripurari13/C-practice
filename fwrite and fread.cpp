// fread() and write()
#include <stdio.h>
struct student{
	char name[20];
	int roll;
}s,s1;
int main(){
	FILE*fp;
	fp=fopen("K.dat","wb");
	printf("Enter name and Roll no:- ");
	scanf("%s%d",s.name,&s.roll);
	fwrite(&s,sizeof(s),1,fp);
	printf("record saved");
	fclose(fp);
	fp=fopen("K.dat","rb");
	if (fp==NULL)
	printf("file not present");
	else
	{
		fread(&s1,sizeof(s1),1,fp);
		printf("\nName:- %s Roll no:- %d",s1.name,s1.roll);
	}
	fclose(fp);
	return 0;
	
}
