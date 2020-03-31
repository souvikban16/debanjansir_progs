#include<bits/stdc++.h>
using namespace std;
char* ones(int n)
{
  switch(n)
  {
    case 1:
      return "One ";
    case 2:
      return "Two ";
    case 3:
      return "Three ";
    case 4:
      return "Four ";
    case 5:
      return "Five ";
    case 6:
      return "Six ";
    case 7:
      return "Seven ";
    case 8:
      return "Eight ";
    case 9:
      return "Nine ";
    case 0:
      return "Zero ";
  }
  
}
char* teens(int n)
{
  switch(n)
  {
    case 1:
      return "Eleven ";
    case 2:
      return "Twelve ";
    case 3:
      return "Thirteen";
    case 4:
      return "Forteen ";
    case 5:
      return "Fifteen ";
    case 6:
      return "Sixteen ";
    case 7:
      return "Seventeen ";
    case 8:
      return "Eighteen ";
    case 9:
      return "Nineteen ";
    case 0:
      return " ";
  }
  
}
char* tens(int n)
{
  switch(n)
  {
    case 1:
      return "Ten ";
    case 2:
      return "Twenty ";
    case 3:
      return "Thirty ";
    case 4:
      return "Forty ";
    case 5:
      return "Fifty";
    case 6:
      return "Sixty ";
    case 7:
      return "Seventy ";
    case 8:
      return "Eighty ";
    case 9:
      return "Ninety ";
    case 0:
      return "Hundred ";
  }
  
}

int main()
{
  cout<<"Enter number under 1 crore"<<endl;
  int n;
  cin>>n;
  int arr[7];
  int length=0;
  for(int i=0;i<7;i++)
  {
    arr[i]=n%10;
    n=n/10;
    if(n==0)
    {
      break;
    }
    length++;
  }
  cout<<length<<endl;
  int skipperflag=0;
  for(int i=length;i>=0;i--)
  {
    
    //cout<<arr[i];
    if(skipperflag==1 || arr[i]==0)
    {
		skipperflag=0;
      continue;
    }
    if(i==1)
    {
      if(arr[1]==1 && arr[0]==0)
      {
		  skipperflag=1;
        cout<<tens(arr[1]);
      }
      else if(arr[1]==1)
      {
		  skipperflag=1;
        cout<<teens(arr[0]);
      }
      else
      {
        cout<<tens(arr[i]);
      }
    }
     if(i==0)
     {
       cout<<ones(arr[i]);
     }
     
     if(i==2)
     {
		 cout<<ones(arr[i])<<"Hundred ";
	 }
	 if(i==4)
    {
      if(arr[4]==1 && arr[3]==0)
      {
		  skipperflag=1;
        cout<<tens(arr[4])<<"Thousand ";
      }
      else if(arr[4]==1 && arr[3]!=0)
      {
		  skipperflag=1;
        cout<<teens(arr[3])<<"Thousand ";
      }
      else
      {
        cout<<tens(arr[i]);
        if(arr[3]==0)
        {
			cout<<"Thousand ";
		}
      }
    }
    if(i==3)
    {
		cout<<ones(arr[i])<<"Thousand ";
	}

    
  }

      
  
  return 0;

}
