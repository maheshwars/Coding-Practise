N = int(input())
digits = input().split(" ")
count =0;
even=[]
odd=[]
oddf = []
evenf = []
first=[]
for i in range(N):
    dig = digits[i]
    n = int(max(dig))*11 + int(min(dig))*7
    
    n= str(n)
    if(len(str(n)))>2:
        n = n[1:]
    
    fr = int(int(n)/10)
    if(i%2==0) :
        
        #print(even.count(str(fr))," ",i)
        #if(even.count(n)<2):
            
        evenf.append(str(fr))
        if str(fr) not in first:
            first.append(str(fr))
        even.append(n)
    else:
        oddf.append(str(fr))
        if str(fr) not in first:
            first.append(str(fr))
        odd.append(n)


for x in first:
    e=0
    o=0
    if(evenf.count(x)>=oddf.count(x)):
        e = evenf.count(x)
    else:
        o = oddf.count(x)
    if(e):
        if(e>=3):
            count+=2
        if(e==2):
            count+=1
    if(o):
        if(o>=3):
            count+=2
        if(o==2):
            count+=1
            
print(count)
    
    
