 //wap to check whether the number is strange or not
 #include<stdio.h>
 void main()
 {
    int n,rem,s=0,p=1;
    printf("enter the number =");
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
        p=p*rem;

    }
    if(s==p)
    printf("strange number");
    else
    printf("not strange number");
 }