p = int(input())
q = int(input())
r = int(input())
s = int(input())
num=0
store={}

def cnt_cad(a,b):
    cnt=0
    if(a==0 or b==0):
        return 0
    if(a==b):
        return 1
    if(a==1 and b>1):
        cnt = b
    if(b==1 and a>1):
        cnt = a
    if(a==1 and b==1):
        cnt = 1
    if(a==b):
        cnt = 1
    
    
    while(a!=1 and b!=1 and a!=b):
        if(b>a):
            if(str(b-a)+"x"+str(a) not in store.keys()):
                store[str(b-a)+"x"+str(a)]=cnt_cad(b-a,a)
            else:
                return store[str(b-a)+"x"+str(a)]+1
        else:
            if(str(a-b)+"x"+str(b) not in store.keys()):
                store[str(a-b)+"x"+str(b)]=cnt_cad(a-b,b)
            else:
                return store[str(a-b)+"x"+str(b)]+1
                
        
    
        
    
    

    return cnt
for i in range(p,q+1):
    for j in range(r,s+1):
        if(i>j):
            st = str(i)+"x"+str(j)
        else:
            st = str(j)+"x"+str(i)
        if(st not in store.keys()):
            store[st]= cnt_cad(i,j)
            num+=store[st]
        else:
            num+= store[st]
        
print(num)
