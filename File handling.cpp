#include<stdio.h>

int main(){
  FILE *p;
  p=fopen("new1.txt","w");
  if(p==NULL)
  {
    printf("file doesnot exist");

  }
  printf("File created");
  fclose(p);
  
   return 0;
}
