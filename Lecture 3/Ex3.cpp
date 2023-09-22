Data Structure: Queue using an Array

Queue Initialization:
    Create an array of size 'maxSize'
    Initialize front and rear pointers to -1

Enqueue (Insertion):
    if rear is equal to maxSize - 1:
        return "Queue is full"
    else:
        increment rear by 1
        queue[rear] = element

Dequeue (Deletion):
    if front is equal to rear:
        return "Queue is empty"
    else:
        increment front by 1
        item = queue[front]
        return item

Front (Peek):
    if front is equal to rear:
        return "Queue is empty"
    else:
        return queue[front]

IsEmpty:
    return (front is equal to rear)
