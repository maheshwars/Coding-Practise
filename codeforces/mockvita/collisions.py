import math

time =[]

n = int(input())
for i in range(n):
    var =[]
    var = [int(x) for x in input().split(' ')]
    time.append((math.sqrt((var[0]**2)+(var[1]**2)))/var[2])
unique = []
counts = 0
c = 0
for t in time:
    if t not in unique:
        unique.append(t)
        c = time.count(t)
        counts += c *(c-1)/2

print(int(counts))
