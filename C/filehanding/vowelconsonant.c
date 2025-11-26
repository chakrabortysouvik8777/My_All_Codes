//check a file to read vowel & consonant
#include<stdio.h>
#include<conio.h>
void main()
{ 
 FILE *fp;
 char fna[20],ch;
 int v=0,c=0,sp=0;
 printf("\n enter file name = ");
 scanf("%s",&fna);
 fp=fopen(fna,"r");
 if(fp==NULL)
 printf(" not found ");
 else
 {
  while(1)
  {
   ch=fgetc(fp);
   if(ch==EOF) 
     break;
   else
   {
    printf("%c",ch);
     switch(ch)
     {
      case 'a': case 'e': case 'i': case 'o': case 'u':
      case 'A': case 'E': case 'I': case 'O': case 'U':
           v++; 
           break;
      case '.': case ' ':
           sp++;
           break;
       default:
             c++;
           }
    }
  }
}
printf("\n\n Vowel = %d ",v);
printf("\n\n Consonant = %d ",c);
printf("\n\n Extra space or . = %d ",sp);
fclose(fp);
getch();
}