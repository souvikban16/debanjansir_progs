import java.util.Scanner;
class octaltodec
{
	int decimal(int x)
	{
		int result=0;
		int mult=1;
		while(x!=0)
		{
			if (x==1)
			{
				result=result+(1)*mult;				
			}
			else
			{
				result=result+(x%10)*mult;
			}
			mult*=8;
			x=x/10;
		}
		return result;
	}
	
	public static void main(String args[])
	{
		System.out.println("Enter the number in octal");
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		octaltodec obj=new octaltodec();
		System.out.println(obj.decimal(n));
	}
}
