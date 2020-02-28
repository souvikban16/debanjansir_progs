
print("Enter the number to test for perfectice")
n=int(input())

temp=n
sum=0
for i in range(1,n):
    if n%i==0:
        sum+=i
if sum==n:
    print("Perfect")
else:
    print("Not perfect")
