#include <stdio.h>

void main()
{
  int n;
  scanf("%d",&n);
  int c=0;
  while(n!=0)
  {
  n=n/10;
  c+=1;
  }
  printf("%d",c);
}
