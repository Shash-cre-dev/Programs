import math
import re

data="Welcome to Python Programming Course"
x=re.search("^Welcome.*Course$",data)
print(x)
if x:
    print("Matched")
else:
    print("Not Matched")

    
data="Welcome to Regular Expression Concept of Python Programming Course"
x=re.search("^Welcome.*Course$",data)
if x:
    print("Matched")
else:
    print("Not Matched")

#.* ---- allows any no. of characters in between start and stop character.
    
data="Python Programming Course You"
x=re.search("^Welcome.*Course$",data)
if x:
    print("Matched")
else:
    print("Not Matched")

#[] ---- can be used to check the range of items.
data="Welcome to Python Programming Course"
x=re.findall("[p-z]",data)
print(x)

#\d ---- returns the digits present in the text in form of list.
data="Python Programing Editor IDLE 3.7.8 Welcomes You"
x=re.findall("\d",data)
print(x)

#/D ---- returns all the non digits present in the text in the form of list.
data="Python Programing Editor IDLE 3.7.8 Welcomes You"
x=re.findall("\D",data)
print(x)

#.* ---- can be used to find sequence starting with and ending with other characters with zero or more occurence in between them
data="Python Programing Welcomes You"
x=re.findall("Py.+n",data)
print(x)

#.? ---- can be used to find sequence starting with and ending with other characters with zero or one occurence in between them
data=" Pytn Pyn Python Programing Welcomes You"
x=re.findall("Py.?n",data)
print(x)

#.{5} ---- can be used to find sequence starting with and ending with other characters with mentioned no of characters in between them
data="Python Programming Welcomes You"
x=re.findall("Pro.{5}ing",data)
print(x)


data="Python Programming Welcomes You"
x=re.findall("Pro.{5}ing",data)
print(x)

#\A ---- checks if string started with this word
data="Python Programming Welcomes You"
x=re.findall("\Apyhton",data)
print(x)

#r"\b" ---- checks starting condition of each word
data="Python Programming Welcomes You"
x=re.findall(r"\bP",data)
print(x)

data="Python Programming Welcomes You"
x=re.findall(r"on\b",data)
print(x)
