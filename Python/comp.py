import math
import cmath


def com(a,b):
    z = complex(a,b)
    print(z)
    r = z.real
    i = z.imag
    angleR = cmath.phase(z)
    angleD = math.degrees(angleR)
    Magnitude = math.sqrt(r**2+i**2)
    output = {Magnitude:[angleR,angleD]}
    return output


x=int(input("Enter a No= "))
y=int(input("Enter a No= "))
print(com(x,y))

      
