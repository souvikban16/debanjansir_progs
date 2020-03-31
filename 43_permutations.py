master=[]

def permute(ls):
	if len(ls)==1:
		# ~ print(ls[0])
		return ls[0]
	else:
		for i in ls:
			sls=ls[:]
			sls.remove(i)
			print(i,permute(sls))
def main():
	
	ls=list(map(int,input().split()))
	for i in ls:
		sls=ls[:]
		sls.remove(i)
		print(i,permute(sls))

main()
