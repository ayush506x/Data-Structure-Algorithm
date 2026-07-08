#LINKED LIST: A linked list is the linear data structure in which element are stored as Nodes and Each node contain data and a pointer (reference to the next node)
#Python Reperesentation:
class Node:
    def __init__(self,data):
        self.data = data #stores the value
        self.next= None # stores the adress of next node 
first = Node(10)
second = Node(20)
third = Node(30)
first.next = second  
second.next = third
print(first.data)
print(first.next.data)
print(first.next.next.data)
