#function definition
def arith_fun(x,y):
    # statement 1 : mathematical process
    z1 = x + y
    z2 = x - y
    z3 = x * y
    z4 = x / y
    z=[z1,z2,z3,z4]
    return z #return value


#main program: 
a=5
b=2
c=arith_fun(a,b)
print ("C",c)


d=50
e=20
f=d+e

g=500
h=200
i=g+h
