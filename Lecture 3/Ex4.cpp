Data Structure: Queue using a Linked List

Queue Initialization:
    Initialize an empty linked list
    Initialize front and rear pointers to NULL

Enqueue (Insertion):
    Create a new node with data = element
    if front and rear are NULL:
        set front and rear to the new node
    else:
        set the next of rear to the new node
        update rear to the new node

Dequeue (Deletion):
    if front is NULL:
        return "Queue is empty"
    else:
        item = front's data
        if front and rear are the same:
            set front and rear to NULL
        else:
            set front to front's next
        return item

Front (Peek):
    if front is NULL:
        return "Queue is empty"
    else:
        return front's data

IsEmpty:
    return (front is NULL)
