from math import sqrt
x = [9,1,12,11,0,15,8,4,2,11,11,0,6,11,15,1,15,7,11,24,6,7,2,9,8]
xa = 0
for i in range(len(x)):
    xa = xa + x[i]
xa = xa/len(x)    
xb = 0
for i in range(len(x)):
    a = x[i] - xa
    b = a*a*a
    xb = xb + b
xc = xb/len(x)
s = 0
for i in range(len(x)):
    p = x[i] - xa
    q = p*p
    s = s + q
s = sqrt(s/(len(x)-1))
sk = xc/(s*s*s)
print(sk)
