import java.util.Scanner;
class prime
{
	boolean primecheck(int n)
	{
		if (n<=1)
		{
			return false;
		}
		else if(n<=3)
		{
			return true;
		}

		else if (n%2==0 || n%3==0)
		{
			return false;
		}

		for (int i=5;i*i<=n;i+=5)
		{
			if (n%i==0 || n%(i+1)==0)
			{
				return false;
			}
		}

		return true;
	}

	public static void main(String[] args) {
		prime t=new prime();

		System.out.println("Enter the number to be checked for prime");
		Scanner in=new Scanner(System.in);
		int a=in.nextInt();
		if(t.primecheck(a)==true)
		{
			System.out.println("Prime");
		}
		else
			System.out.println("Not Prime");
	}
}