#learning the types of sorting how sorting works 
'''
# BUBBLE SORT first type of sort 
arr = [5,3,8,1]
n=len(arr)
for i in range(n):
    for j in range(0,n-i-1):
        if arr[j] > arr[j+1]:
            arr[j],arr[j+1] = arr[j+1],arr[j]
print(arr)

# SELECTION SORT second type of sort 
arr =[64,15,12,22,11]
n=len(arr)
for i in range(n):
    min_index = i 
    for j in range (i+1,n):
        if arr[j]<arr[min_index]:
            min_index=j
    arr[i],arr[min_index] = arr[min_index],arr[i]
print(arr)
'''
#INSERTION SORT third and most efficent type of sort
arr = [5,2,4,6,1]
for i in range(0,len(arr)):
    key = arr[i]
    j=i-1
    while j>=0 and arr[j] > key:
        arr[j+1] = arr[j]
        j-=1
    arr[j+1] = key
print(arr)