import math
# Sub Function
def possible(circ,hepc):
    if circ==hepc:
        return True
    else:
        return False


cird=int(input("Enter the diameter of cylinder"))
cirr=cird/2
cirh=int(input("Enter the height of cylinder"))
circ=2*math.pi*(cirr)
heps=10
heph=70
hepc=7*heps
