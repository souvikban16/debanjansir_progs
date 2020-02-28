import java.util.Scanner;

class sumofarray
{
	public static void main(String args[])
	{
		Scanner in =new Scanner(System.in);
		System.out.println("Enter the range of the array");
		int n=in.nextInt();
		int[] ar=new int[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter the element");
			ar[i]=in.nextInt();
			sum=sum+ar[i];
		}
		System.out.println("Sum="+sum);

	}
}
