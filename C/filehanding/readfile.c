//wap to print(read) the content from a file
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
  FILE *fp;
  char fna[20],ch;
  printf("Enter the file Name=");
  scanf("%s",&fna);//fna=["meghna.txt"]
  fp=fopen(fna,"r");
  if(fp==NULL)
  printf("File Not Found");
  else
  {
    while(1)//for(;;)
    {
      ch=fgetc(fp); //ch='e'
      printf("%c",ch);//Me           
      sleep(1);
      if(ch==EOF)
        break;                    
     }
  }  
  fclose(fp);
  getch();
}