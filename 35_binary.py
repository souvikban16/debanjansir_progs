def binary(x):
	if x==1:
		return 1
	else:
		return x%2+10*binary(int (x/2))

n=int(input())
print(binary(n))
