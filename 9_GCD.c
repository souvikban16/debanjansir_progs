#include <stdio.h>

int min(int x,int y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }

}
void main()
{
    int a,b,gcd=1;
    printf("Enter the 2 numbers=");
    scanf("%d %d",&a,&b);
    int divisor=2;
    while(divisor<min(a,b))
    {
        if ((a%divisor==0) &&(b%divisor==0))
        {
            a=a/divisor;
            b=b/divisor;
            gcd*=divisor;

        }
        else
        {
            divisor++;

        }
    }
    printf("%d",gcd);

}
