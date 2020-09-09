t = int(input())

for _ in range(t):
    r,g,b,w = [int(x) for x in input().split(" ")]

    if(r%2==0 and g%2==0 and b%2==0 and w%2==0):
        print("Yes")
        continue
    eve=0

    if(r>0 and b>0 and g>0):
        if(r%2==0):
            eve+=1
        if(g%2==0):
            eve+=1
        if(b%2==0):
            eve+=1
        if(w%2==0):
            eve+=1
        if(eve==2 and eve==3):
            print("No")
            continue
        else:
            print("Yes")
            continue
    else:
        if(r<=0 and b<=0 and g<=0 and w!=0):
            print("Yes")
        else:
            print("No")
