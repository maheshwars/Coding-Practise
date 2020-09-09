#t= int(input())
#for i in range(t):
n = int(input())

line = [x for x in input()]
count={'A':line.count('A'),'B':line.count('B')}
l = len(line)
stri = []
ind = []
for i in range(l):
    if(line[i]=='A' or line[i]=='B'):
        stri.append(line[i])
        ind.append(i)
        
#print(stri,ind)

if(stri[0]=='A'):
    count['A']+= ind[0]
if(stri[-1]=='B'):
    count['B']+= l - ind[-1]-1 
for c in range(len(stri)-2):
    if(stri[c]==stri[c+1]):
        count[stri[c]]+=ind[c+1]-ind[c]-1

if(count['A']>count['B']):
    print('A')
if(count['A']<count['B']):
    print('B')
if(count['A']==count['B']):
    print('Coalition government')
#print(count['A'],count['B'])



     
     
