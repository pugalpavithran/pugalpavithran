n=int(input())
prime=1
i=2
while i<n:
	if(n%i==0):
  
		prime=0
    
	i=i+1	
if(prime==1):
	print("prime")
  
else:
	print("not")
