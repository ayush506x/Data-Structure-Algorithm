#Inserting in the linked list is basically easy as compare to other due to complexity 
#Innserting at the Begining 
# Using simple variables and lists instead of Node class
head = [10, None]
second = [20, None]
third = [30, None]
new_node = [40, None]

# Linking nodes
head[1] = second
second[1] = third
third[1] = new_node

# Traverse and print
current = head
while current is not None:
    print(current[0])
    current = current[1]
