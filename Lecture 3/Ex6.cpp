# Node structure for the linked list
class Node:
    data
    next

# Stack data structure
class Stack:
    top = null

# Push operation
function push(stack, data):
    newNode = createNode(data)
    newNode.next = stack.top
    stack.top = newNode

# Pop operation
function pop(stack):
    if stack.top is null:
        return "Stack is empty"
    else:
        poppedData = stack.top.data
        stack.top = stack.top.next
        return poppedData

# Peek operation
function peek(stack):
    if stack.top is null:
        return "Stack is empty"
    else:
        return stack.top.data

# IsEmpty operation
function isEmpty(stack):
    return stack.top is null
