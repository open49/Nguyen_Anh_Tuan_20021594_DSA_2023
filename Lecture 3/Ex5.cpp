Data Structure: Stack using an Array

Stack Initialization:
    Create an array of size 'maxSize'
    Initialize a pointer top to -1

Push (Insertion):
    if top is equal to maxSize - 1:
        return "Stack is full"
    else:
        increment top by 1
        stack[top] = element

Pop (Deletion):
    if top is equal to -1:
        return "Stack is empty"
    else:
        item = stack[top]
        decrement top by 1
        return item

Top (Peek):
    if top is equal to -1:
        return "Stack is empty"
    else:
        return stack[top]

IsEmpty:
    return (top is equal to -1)
