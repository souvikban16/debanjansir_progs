#include <stdio.h>

void main()
{
  int a,b;
  printf("Enter the numebers separated by a space\n");
  scanf("%d %d",&a,&b);
  
  int lcm=1;
  int divisor=2;
  while((a>1 || b>1) && divisor<a)
  {
    if (a%divisor==0 && b%divisor==0)
    {
      a=a/divisor;
      b=b/divisor;
      lcm=lcm*divisor;
      continue;

    }

    if(a%divisor==0)
    {
      a=a/divisor;
      lcm=lcm*divisor;
    }
    else if(b%divisor==0)
    {
      b=b/divisor;
      lcm=lcm*divisor;
    }

    divisor++;
  }

  printf("%d\n",(lcm*a)*b );
}
