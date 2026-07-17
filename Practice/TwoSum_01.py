a=[int(x) for x in input().split()]
b = len(a)
target = int(input())
for i in range(b):
    for j in range(i+1,b):
        if  a[i] + a[j] == target :
            print(i , j)

       