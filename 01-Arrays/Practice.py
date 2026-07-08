
#write a code to print all the element of the array 
a = [10,20,30,40,50]
for i in range(len(a)):
    print(a[i])

#write a code to find the element from the array by leniar search :
arr = [10,20,30,40,50,60]
#let's set a target what we have to find 
target = 30
for i in range(len(arr)):
    if arr[i] == target :
        print("Target is found at index:",i)

#deletion an elsemnt of arr 
arr = [10,20,30,40,50]
element = 30 #element that whant to be deleted 
arr.remove(element)
print(arr)

#write a code to insert a element in the array at specific index 
arr = [10,20,30,40,50]
a = 35
index = 4 
arr.insert(index,a)
print(arr)

#find the largest element in the arr 
arr = [1,3,4,7,9,2,6,8]
arr.sort()
print(arr[-1])

#without using max() and sort() find the second largest element of the arr 
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        # Last i elements are already in place
        for j in range(0, n - i - 1):
            # Swap if elements are in wrong order
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr
arr = [12,34,56,30,58]
a = bubble_sort(arr)
print(a[-2])