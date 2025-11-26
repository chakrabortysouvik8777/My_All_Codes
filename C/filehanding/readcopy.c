//file read & copy
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
 FILE *fp,*fp1;
 char fna[20],fna1[20],ch;
 int c=0;
 printf("\n enter Source file name = ");
 scanf("%s",&fna);//gets(fna);
 printf("\nEnter Target file to be copied =");
 scanf("%s",&fna1);
 fp=fopen(fna,"r");
 fp1=fopen(fna1,"a");//w
 if(fp==NULL)
 printf(" not found ");
 else
 {
  while(1)
  {
   ch=fgetc(fp);
   if(ch!=EOF)
   {
    fputc(ch,fp1);
    c++; 
//    printf("%d ",c);
    printf("%c",ch);
    //sleep(100);
  }
   else
   {
   printf("\nCopy Complete");
   break;
   }
  }
}
printf("\ncount = %d",c);
fclose(fp);
fclose(fp1);
getch();
}