def recursion(x):
    if x==0:
        return 1
    return recursion(x-1) #recursion, executes infinetly

n=5
val=recursion(5)
print(val)



# Factorial

def fact(x):
    if x==0:
        return 1
    return x * fact(x-1) #recursion, executes infinetly

n=5
val=fact(5)
print(val)


# SUM

def jhodd(x):
    if x==0:
        return 1
    return x + jhodd(x-1) #recursion, executes infinetly

n=5
val=jhodd(5)
print(val)


# fib
def fib(n):
    if n <=1:
        return n
    else:
        return (fib(n-1) + fib(n-2)) #recursion, executes infinetly

n=5
val=fib(5)
print(val)
