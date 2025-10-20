## Question 1

See Activity 8 Image. Using a binary search will start at 1, with all values initially going to the right as they are greater than 1. From there, 

## Question 2

A binary tree search has a time complexity of O(log(N)) at base 2. Searching through a tree of 1,000 will, in a worst-case scenario, take log2(1,000) or about **10** steps.

## Question 3

Finding the greatest value in a binary search tree is a simple matter of always picking the right descendant for every node. Regardless of the values or their order, from the way this 

In pseudocode, it would look something like this:
```
largestValue = node.value;//Of the tree's root.
while (node has right child)
{
  if (node has right child)
  {
    go to child;
    largestValue = node.value;
  }
}
return largestValue;
```

The program would always pick the right descendant if one is present, and in the event of a branch where there is only a value to the left, that would mean the largest value on the tree has already been reached, and there is no need to search further.

## Question 4

```c++
int[] a = [1,5,9,2,4,10,6,3,8];

class TreeNode:
def __init__(self,val,left=none,right=none):
  
```

## Video Explanation
