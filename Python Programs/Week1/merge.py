n=int(input("Enter first array length: "))
m=int(input("Enter second array length: "))
a1=[]
a2=[]
print("Enter first array elements: ")
for i in range(n):
    e=int(input())
    a1.append(e)
print("First array: ")
for i in range(n):
    print(str(a1[i])+" ", end=" ")
print()
print("Enter second array elements: ")
for i in range(m):
    e=int(input())
    a2.append(e)
print("Second array: ")
for i in range(m):
    print(str(a2[i])+" ", end=" ")
print()
print("Merged arrays: ")
a1=a1+a2
print()
for i in range(n+m):
    print(str(a1[i])+" ",end=" ")
print()