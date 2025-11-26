//wap to append any data within the file or create the file within the file
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
  FILE *fp;
  char fna[20],ch;
  printf("enter the file name=");
  scanf("%s",&fna);
  printf("enter the file's Content=");
  fp=fopen(fna,"a");
  if(fp==NULL)
    printf("not found");
  else
  {
    while(1)
    { 
      scanf("%c",&ch);
      if(ch=='#')
        break;
      else
        fputc(ch,fp);
     }
  }
fclose(fp);
printf("File reading");
sleep(1);
printf("........");
fp=fopen(fna,"r");
 while(1)
  {
     ch=fgetc(fp);
     if(ch==EOF)
           break;  
     sleep(1);
     printf("%c",ch);
  }    
fclose(fp);
getch();
}