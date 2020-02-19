def reverse(a):
	a=str(a)
	ls=list(map(int,a))
	ls.reverse()
	print(str(c for c in ls))

n=int(input())
reverse(n)