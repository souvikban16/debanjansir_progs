def decimal(n):
	dec=0;
	mult=1;
	while(n!=0):	
		dec=dec+mult*int(n%10);
		mult=mult*8;
		n=n//10;
	return binary(dec)

def binary(dec):
		bin=0
		while(dec!=0):
			# ~ if(dec==1):
				# ~ bin=bin*10+1
				# ~ dec=dec//2;
				# ~ continue
			bin=bin*10+int(dec%2);
			print(dec)
			dec=dec//2;
			
		return bin
def main():
	n=int(input("Enter the octal number="))
	print("Number in binary=",decimal(n))
	
main()
	
