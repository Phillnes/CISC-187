## Question 1

This function pushes on to an array, but it creates one in the process. The array can be of variable length N, so the space complexity is O(N).

## Question 2

This function similarly pushes elements on to an array that is initially declared empty, so despite the lack of a nested loop, the space complexity is still O(N). This shows how the space complexity differs from the time complexity.

## Question 3

To change reverse(array) to a function of space complexity O(1), instead of creating a new array, the previous one must be modified.

```c++
function reverse(array)
{
  let temp;
  for (let i = 0; i <= array.length / 2; i++)
  { 
        temp = array[i];
        array[i] = array[(array.length - i - 1)];
        array[(array.length - i - 1)] = temp;
  }
return array;
}
```

While an additional data element is created (the temp variable), this is only one element at a time, so the space used is constant -- which means an O(1) space complexity.

## Question 4

The first function uses a single for loop based on the length of a variable array, giving it a time complexity of O(N). It creates a new array, also of variable length, so its space complexity is also O(N).

The second function also uses a for loop for the array's length, so it has a time complexity of O(N). However, it does *not* create a new array, instead modifying the array that is put in. This gives it a space complexity of O(1), as no variable-length data is created within the function.

The third function uses recursion instead of a loop, but the same general rules apply for time complexity. The number of calls to the function is based on the array's length, so it still has a time complexity of O(N). Like Version #2, it alters the existing array instead of creating a new one, *however,* the use of recursion means that it adds space for each call of the function. Since the function calls itself once per iteration, this gives it a space complexity of O(N).

In short, all complexities of the three given versions are of O(N) except for the space complexity of Version #2.

| Version | Time Complexity | Space Complexity |
| ------- | --------------- | ---------------- |
| Version #1  | O(N)  | O(N) |
| Version #2  | O(N)  | O(1) |
| Version #3  | O(N)  | O(N) |

## Video Explanation

https://sdccd.us-west-2.instructuremedia.com/embed/db0b9948-32ba-45c6-8f67-75ddc9288706
