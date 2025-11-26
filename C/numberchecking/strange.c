 //wap to check whether the number is strange or not
 #include<stdio.h>
 void main()
 {
    int i,n,s=0;
    printf("enter the number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {   
            s+=i;
        }
    }
    
     if(s>(2*n))
    printf("strange number");
    else
    printf("not strange number");
 }