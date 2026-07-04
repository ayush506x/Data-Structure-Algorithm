
#write a code to print all the element of the array 
a = [10,20,30,40,50]
for i in range(len(a)):
    print(a[i])

#write a code to find the element from the array by lenear search :
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