## Question 1

See Activity 8 Image. Using a binary search will start at 1, with all values initially going to the right as they are greater than 1. From there, larger ones simply follow a direct path to the right, while any values smaller than the previous are sorted as children to the left.

## Question 2

A binary tree search has a time complexity of O(log(N)) at base 2. Searching through a tree of 1,000 will, in a worst-case scenario, take log2(1,000) or about **10** steps.

## Question 3

Finding the greatest value in a binary search tree is a simple matter of always picking the right descendant for every node. Regardless of the values or their order, reaching a point where there are no longer any values to the right will mean that the highest end has been reached, as otherwise, larger values would have been placed on a right branch earlier.

In pseudocode, it would look something like this:
```
largestValue = node.value;//Of the tree's root.
while (node has right child)
{
  go to right child;
  largestValue = node.value;
}
return largestValue;
```

The program would always pick the right descendant if one is present, and in the event of a branch where there is only a value to the left, that would mean the largest value on the tree has already been reached, and there is no need to search further.

## Question 4

```c++
#include "Tree.h"

//Declares the array to be sorted.
int a[9] = {1, 5, 9, 2, 4, 10, 6, 3, 8};

//Declares the tree that the values will be organized by.
Tree<int> treeSortedArray;

//A loop that iterates based on the size of the array, inserting the value at the spot in to the tree by the binary search tree's own function.
//This stops at the array's length so that this code could be used for other arrays of other sizes, not just the example one given in the question.
for(int i = 0; i < a.length; i++)
  {
    treeSortedArray.insertNode(a[i]);
  }

```

## Video Explanation

https://sdccd.us-west-2.instructuremedia.com/embed/ea8567f6-a60d-40b9-b247-35fdae163960
