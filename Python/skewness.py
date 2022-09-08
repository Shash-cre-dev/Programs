# Program
import math


l=eval(input())
sum1=0
for i in l:
    sum1+=i
mean=print(sum1/len(l))
x=0
for i in range(len(l)):
    a=l[i]-mean
    b=a**3
    x=x+a
X=x/len(l)
s=0
for i in range(len(l)):
    t=l[i]-mean
    u=t**2
    v=v+u
s=math.sqrt(s/(len(x)-1))
skew=X/(s**3)
print(skew)
