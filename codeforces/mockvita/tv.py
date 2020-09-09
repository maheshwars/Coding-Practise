N = int(input())
r1, r2 = [int(x) for x in input().split(' ')]
rev = int(input())

def per_day(M,D,tv):
    n = ((6 - M)**2) + abs(D - 15)
    if(n<N):
        if(n<(N-tv)):
            cost = n*r2
        else:
            cost = (N-tv)*r2 + (n-(N-tv))*r1
    else:
        cost = (N-tv)*r2 + tv*r1
    return cost

thirty_one = [1,3,5,7,8,10,12]

teli = 0

def total(tv):
    
    tot = 0
    for m in range(1,13):
           
        if (m==2):
            for i in range(1,29):
                tot +=per_day(m,i,tv)    
                
        elif m in thirty_one:
            for i in range(1,32):
                tot +=per_day(m,i,tv)    
                
        else:
            for i in range(1,31):
                tot +=per_day(m,i,tv)    
                
    return (tot)

for t in range(1,N):
    tota = total(t)
    if tota>=rev:
        teli = t
        break
print(teli)
