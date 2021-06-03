#include<stdio.h>

int main()
{
  FILE *fp;
  fp=fopen("cfile.txt","w");
  fprintf(fp,"LAB assignment 1");
  fclose(fp);
  
  fp=fopen("cfile.txt","r");
  char word[100];
  while(fscanf(fp,"%s",word)!=EOF)
    printf("%s ",word);
  fclose(fp);
  
  fp=fopen("cfile.txt","r");
  char c;
  while((c=fgetc(fp))!=EOF)
    printf("%s ",c);
  fclose(fp);
  
  fp=fopen("cfile.txt","w");
  fputs("hello c programming",fp);  
  fclose(fp);
  
  fp=fopen("cfile.txt","r");
  char text[100];
  fgets(text,200,fp);
  printf("%s",text);  
  fclose(fp);
  
}
