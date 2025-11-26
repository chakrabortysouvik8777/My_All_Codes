//wap to create a file(write) & read the content from the created file
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
  FILE *fp;
  char fna[20],ch;
   printf("Enter the file Name=");
   scanf("%s",&fna);//fna="Ananya.txt"
   fp=fopen(fna,"w");
   if(fp==NULL)
       printf("Not Found");
   else
    {
      printf("Enter the Content=\n");
      while(1)
        {
          scanf("%c",&ch);//ch='hello BBA how are you ? fine # sir'
          if(ch=='#') 
                break;
         else
             fputc(ch,fp); //hi
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