import math

n= int(input())
speed = [int(x) for x in input().split(" ")]
#print(speed)
fac1 = math.factorial(n)//math.factorial(n-(n))
fac2 = math.factorial(n)//math.factorial(n-(n-1))
#print(fac1,fac2)
def get(n):
    if(n==0):
        return 0
    
    
    if(n%2==0):
        gr = (fac1+fac2)+2
    else:
        gr = (fac1+fac2)-1
    #print(gr)
    return gr
print("%.6f"%(get(n)/fac2))
