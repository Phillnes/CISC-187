## Assignment

Linked lists are made of nodes. Nodes have data, the elements being stored on them; and pointers, which directs the linked list to the next space in memory that the following node is stored.

```c++
#include "List.h"

//Initializing the list of a template type.
template<typename T>
List<T> numList;

//Adding nodes to the start of the list.
numList.insertAtFront(4);
numList.insertAtFront(10);
numList.insertAtFront(-100);
numList.insertAtFront(1);

//Because of how insertAtFront works, the list is ordered 1, -100, 10, 4. The first item added is at the end.

//Removing nodes from the start of the list.
list.removeFromFront(1);
list.removeFromFront(-100);

//The list would now be 10, and 4.
```

## Video Explanation
