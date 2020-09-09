n = [int(x) for x in input().split(" ")]
n.sort()

S=sum(n)

l=len(n)
x=0
f=0
while(f<=S/2 and x<l/2):
    if(f + n[x]+n[l-x-1])<S/2:
        f += n[x]+n[l-x-1] 
    x=x+2
    
print(max(f,S-f))
