#include <bits/stdc++.h>
using namespace std;

int facto(int x)
{
  if(x==1)
  {
    return 1;
  }
  else
  {
    return x*facto(x-1);
  }
}

int main()
{
  int n;
  printf("Enter the number to check for strong number\n");
  scanf("%d",&n);
  int t,s=0,w;
  t=n;
  while(t!=0)
  {
    w=t%10;
    s=s+facto(w);
    t=t/10;
  }
  if(n==s)
  {
    printf("Strong\n" );

  }
  else
  printf("Weak\n" );
}
