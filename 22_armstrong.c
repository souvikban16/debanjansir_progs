#include<stdio.h>


int  main()
{
  int n=0;
  printf("Enter the number to check for Armstrong\n");
  scanf("%d",&n);
  int temp=n,sum=0,w;
  while(temp!=0)
  {
    w=temp%10;
    sum=sum+(w*w*w);
    temp=temp/10;
  }
  if(n==sum)
    printf("Armstrong\n" );
  else
  printf("Not Armstrong\n" );

}
