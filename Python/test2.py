from math import sqrt
def calc_skew(a):
    s = 0
    for i in range(25):
        s = s + int(a[i])
    am = s/25
    s2 = 0
    for i in range(25):
        s2 = s2 + float((a[i] - am)**2)
    sd = sqrt(s2/(24))
    sk = s2/24
    sk1 = round((sk/(sdsd*sd)),2)
    return sk1
x = []
for i in range(25):
    c = int(input())
    x.append(c)
ans = calc_skew(x)
print(ans)
