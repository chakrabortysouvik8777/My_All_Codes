 #include<stdio.h>
 void main()
 {
    int bs,da,ta,hra,pf,gs,nets;
    printf("Enter the basic salary =");
    scanf("%d",&bs);
    da=(bs/100)*5;
    ta=(bs/10)*10;
    hra=(bs/100)*15;
    gs=bs+da+ta+hra;
    pf=(bs/100)*20;
    nets=bs-pf;
    if(bs<=10000)
      printf("clerk");
    else if(bs>10000 && bs<=20000)
     printf("peon");
    else if(bs>20000 && bs<=40000)
     printf("executive");
    else if(bs>40000 && bs<=80000)
     printf("T.L");
    else if(bs>80000 && bs<=100000)
     printf("Sr. T.L");
    else if(bs>100000 && bs<=300000)
     printf("B.M");
    else if(bs>300000)
     printf("CEO");
    printf("\ngross salary =%d",gs);
    printf("\nnet salary =%d",nets);
    printf("\nta =%d",ta);
    printf("\nda =%d",da);
    printf("\nhrza =%d",hra);  
 }