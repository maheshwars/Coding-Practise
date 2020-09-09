import math
n= int(input())
#print(speed)
if n==0:
    print("%.6f"%0)
else:
    
    speed = [int(x) for x in input().split(" ")]
    fac = math.factorial(n)

    if(n%2==0):
        gr = (2*fac)+2
    else:
        gr = (2*fac)-1

    print("%.6f"%(gr/fac))
