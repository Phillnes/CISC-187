## Task 1

One function that would run at O(N+M) is to combine the two arrays and then count each unique (first and last) name, then return an array with all the names that have a counter of 2. This way, a single loop is used, 

```c++
```

## Task 2

Since the function's numbers will always start at zero and end at the maximum value, the length of the array can be used to determine how many values will be in it, so the input array can be compared to an array containing all the integers from 0 to the array's length + 1.

```c++

return missing;
```

## Task 3

These values will always be positive numbers, and so a simple subtraction between the numbers will always produce the largest value of difference, as there is no need to worry about negative numbers. Because of this, finding the greatest difference is a manner of finding the smallest value of the array and the largest value of the array. This can be made by simply using one loop that goes through the array, compares the value to the one after, and update the smallest or largest value if it is above the maximum or below the minimum. If the value is in-between them, neither variable is changed.

While this performs multiple operations for each use (comparing the number, ), this is a constant number for each element of the array, so the time complexity is still O(N).

```c++

for (i = 0; i < array.length; i++)
{
}

return max - min;
```

## Task 4

Unlike Task 3, negatives need to be taken in to consideration. Negatives should be multiplied to each other and compared to positives multiplied to each other. Similar to Task 3, variables representing maximums should be counted; however, my code will store the highest two positive numbers (looking for the largest product instead of the largest difference would mean storing the *highest* two numbers, not the highest and the lowest) and the two negative numbers with the highest absolute value.

The only possible situation where the highest product will be negative is if 

```c++

if ()
{
higherProduct = ;
}
else
{
higherProduct = ;
}

return higherProduct;
```

## Task 5

The only possible values an element of the array can have are 97.0, 97.1, 97.2, ..., 98.8. 98.9, and 99.0, only twenty-one values in total.

Similar to Task 1, we can set a "counter" of each of the known values. Then go through the array, increasing the counter of each value when passed. At the end, an array will be constructed based on the counters, making a number of entries of that value based on the value of the counter.

```c++
```

Despite the number of operations, this is still a constant multiple of a function that iterates through the array, having a time complexity of O(N). For longer lists of data that 

## Task 6



```c++
```

## Video Explanation

