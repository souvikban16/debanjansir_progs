import java.util.Scanner;

class suminarange
{
	public static void main(String args[])
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the range");
		int r=in.nextInt();
		int sum=0;
		for(int i=0;i<=r;i++)
		{
			sum+=i;
		}
		System.out.println("Sum="+sum);


	}
}