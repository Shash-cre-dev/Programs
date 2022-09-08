def check(r,hc):
    hh=70
    sh=10
    circ=2*math.pi*r
    perh=sh*7
    if circ>=perh:
        return True
    else:
        return False

def volume(r,hc):
    hh=70
    sh=10
    vc=math.pi*r*r*hc
    vh=7/4*(sh*sh)*(math.cos(math.pi/7)/math.sin(math.pi/7))*hh
    return vc-vh

dc=int(input())
hc=int(input())
r=dc/2
sol1=check(r,hc)
print(sol1)
sol2=volume(r,hc)
print(sol2)
