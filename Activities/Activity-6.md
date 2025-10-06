## Question 1

See Activity 6 Image 1. Each PUSH(S,n) adds the value *n* to the stack *S*, while each POPS(S) removes the latest value from *S*. By last-in, first-out, the most recent element added is the one that will be removed per POP(). The final result of the stack will just have the elements 4 and 1.

## Question 2

See Activity 6 Image 2. An ENQUEUE(Q,n) operation adds element *n* to the queue *Q*, while DEQUEUE(Q) removes the *earliest* value from *Q*. Unlike the stack's POP() operation, DEQUEUE() removes from the left end. The final result of the queue will have 3 and 8.

## Question 3

Enqueue rewritten to detect overflow in pseudocode:
```
Q[Q.tail] = x
if Q.tail == Q.length
    Q.tail = 1
else if Q.numberElems == Q.length
    return error
else Q.tail = Q.tail + 1
```

Dequeue rewritten to detect underflow in pseudocode:
```
x = Q[Q.head]
if Q.head == Q.length
    Q.head = 1
else if Q.isEmpty
    return error
else Q.head = Q.head + 1
return x
```

## Question 4

For a deque, operations would work somewhat like this, specifying the end that an element is added to or removed from, in pseudocode, for deque *D*:
```
PUSHFRONT(D,1)//Adds element 1 to the deque, from the front.
PUSHBACK(D,2)//Adds element 2 to the deque, from the back.
POPFRONT(D)//Removes the element on the front of the deque, in this case 1.
POPBACK(D)//Removes the element on the back end of the deque, in this case 2, the only element.
```

Unlike a stack or queue, which has a single operation that applies to the front or back (for simplicity, since there is only one end being operated on, the end does not have to be stated), a deque needs to specify which end the operation is worked on.

## Video Explanation

https://sdccd.us-west-2.instructuremedia.com/embed/4dfd694e-4f60-4655-970e-6f53262032b4
