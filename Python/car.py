# program for car

def area(a,b):
    ar=2*3.14*(a/2)*b
    print("Area of Wheel in inches",ar)
    return ar
  
def price(c):
    dol=c*2.54*1
    rup=dol*60
    print("Total cost of Wheel",rup)
   

    
d=[15,16,17,18]
print("The diameter of tyres present",d)
di=int(input("Enter the radius of the wheel"))
if di ==15:
    w=6
elif di==16:
    w=7
elif di==17:
    w=8
elif di==18:
    w=9
else:
    print("Tire model is not present")

x=area(di,w)
print(x)
y=price(x)
print(x)






