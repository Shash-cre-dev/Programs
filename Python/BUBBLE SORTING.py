list1=[0,0,0,0]
list1[1],list1[2] = 5,2
print(list1)
list1[1],list1[2] = list1[2],list1[1]
print(list1)

# BUBBLE SORTING
# Ascending
list2=[9,1,12,11,0,15,8,4,2,11,11,0,6,11,15,1,15,7,11,24,6,7,2,9,8]
n=len(list2)
for i in range(n-1):
    for j in range(0, n-i-1):
        if list2[j]>list2[j+1]:
            list2[j],list2[j+1]=list2[j+1],list2[j]
            
print(list2)            

# Descending
list2=[9,1,12,11,0,15,8,4,2,11,11,0,6,11,15,1,15,7,11,24,6,7,2,9,8]
n=len(list2)
for i in range(n-1):
    for j in range(0, n-i-1):
        if list2[j]<list2[j+1]:
            list2[j],list2[j+1]=list2[j+1],list2[j]
            
print(list2)            
