import java.util.Scanner;
class bintodec
{
	int decimal(int n)
	{
		int result=0;
		int mult=1;
		while(n!=0)
		{
			result=result+mult*n%10;
			n=n/10;
			mult*=2;
		}
		return result;
	}
		
	public static void main(String args[])
	{
		bintodec obj=new bintodec();
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the binary number");
		int n=in.nextInt();
		System.out.println(obj.decimal(n));
	}
}

