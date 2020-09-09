n= int(input())
bride = [x for x in input()]
groom = [x for x in input()]

flag= 1

r_count_bride = bride.count('r')
m_count_bride = bride.count('m')

r_count_groom = groom.count('r')
m_count_groom = groom.count('m')

if(r_count_bride == r_count_groom and m_count_bride == m_count_groom):
    print(0)
    
else:
    while(len(bride)>0):
        br = bride[0]
        if br in groom:
            bride.pop(0)
            groom.pop(groom.index(br))
        else:
            flag=0
            print(len(bride))
            break
    if(flag==1):
        print(0)
