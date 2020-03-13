import java.util.Scanner;
class abundunt
{
	public static void main(String args[])
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the number to check if its Abundunt");
		int n=in.nextInt();
		int factorsum=0;
		for(int i=1;i<n;i++)
		{
			if (n%i==0)
			{
				factorsum+=i;
			}
		}
		if (factorsum>n)
		{
			System.out.println("Abundunt");
		}
		else
		{
			System.out.println("Not Abundunt");
		}
	}
}

		
