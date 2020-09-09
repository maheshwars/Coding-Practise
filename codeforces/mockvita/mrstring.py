units = ['','one','two','three','four','five','six','seven','eight','nine']
teen = ['ten','eleven','twelve','thirteen','fourteen','fifteen','sixteen', 'seventeen','eighteen','nineteen']
tens = ['','ten','twenty','thirty','forty','fifty','sixty','seventy', 'eighty','ninety']
vow ='aeiou'
def text(n):
    s=str(n)
    if(n==0):
        return 'zero'
    if(n==100):
        return 'hundred'
    if(len(s)==1):
        return units[n]
    if(len(s)==2):
        if(s[0]=='1'):
            return teen[int(s[1])]
        if(int(s[0])>1):
            return tens[int(s[0])]+" " +units[int(s[1])]
            

def num_vowel(s):
    cnt =0
    for x in s:
        if x in vow:
            cnt+=1
    return cnt
#for i in range(101):
#    print(text(i)+", ",num_vowel(text(i)))
    
n= int(input())
nums = [int(x) for x in input().split(" ")]
D=0
for d in nums:
    D+= num_vowel(text(d))
    #print(text(d))
#print(D)
pcnt=0
pairs=[]
nums= sorted(nums)
for i in range(len(nums)):
    for j in range(i+1,len(nums)):
        if nums[i]+nums[j]==D:
            if (nums[i],nums[j]) not in pairs:
                pairs.append((nums[i],nums[j]))
                pcnt+=1
if(pcnt>100):
    print("greater 100")
else:
    print(text(pcnt).rstrip())
       
