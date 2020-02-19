import java.util.Scanner;
class sumofdigits

{
  public static void main(String args[])
  {
    Scanner in =new Scanner(System.in);
    System.out.println("Enter the number");
    int n=in.nextInt();
	int sum=0;
	int w;
	while(n!=0)
	{
		w=n%10;
		sum=sum+w;
		n=n/10;		
		System.out.println(w);
	}
	System.out.println("Sum="+sum);
}
}
