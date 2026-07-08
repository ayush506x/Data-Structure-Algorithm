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