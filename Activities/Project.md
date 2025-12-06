## Task 1

One function that would run at O(N+M) would be one that combines the two arrays and counts each unique (first and last) name, then return an array with all the names that have a counter of 2. This way, a single loop is used, 

```c++

return ;
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

int maximum = a(0);
int minimum = a(0);

for (i = 1; i < a.length - 1; i++)
{
  if (a(i) > maximum)
  {
    maximum = a(i);
  }
  else if (a(i) < minimum)
  {
    minimum = a(i);
  }
}

return maximum - minimum;
```

## Task 4

Unlike Task 3, negatives need to be taken in to consideration. Negatives should be multiplied to each other and compared to positives multiplied to each other. Similar to Task 3, variables representing maximums should be counted; however, my code will store the highest two positive numbers (looking for the largest product instead of the largest difference would mean storing the *highest* two numbers, not the highest and the lowest) and the two negative numbers with the highest absolute value.

The only possible situation where the highest product will be negative is if there are exactly two elements in the array.

```c++
if (a.length < 2)
{
return -1;
}

else if (a.length == 2)
{
  return a(0) * a(1);
}

int posMax = a(0);
int posSecond = a(0);
int negMax = a(0);
int negSecond = a(0);
int positiveProduct;
int negativeProduct;
int higherProduct;

for (int i = 1; i < a.length - 1; i++)
{

  if (a(i) > posMax)
  {
    posMax = a(i);
  }
  else if (a(i) > posSecond && a(i) < posMax)
  {
    posSecond = a(i);
  }
  else if (a(i) < negMax)
  {
    negMax = a(i);
  }
  else if (a(i) < negSecond && a(i) > negMax)
  {
    negSecond = a(i);
  }
}

positiveProduct = posMax * posSecond;
negativeProduct = negMax * negSecond;

if (negativeProduct > positiveProduct)
  {
    higherProduct = negativeProduct;
  }
  else
  {
    higherProduct = positiveProduct;//If the values are equal, higherProduct being assigned to either will still have the same result.
  }
}
return higherProduct;
```

## Task 5

The only possible values an element of the array can have are 97.0, 97.1, 97.2, ..., 98.8. 98.9, and 99.0, only twenty-one values in total.

Similar to Task 1, we can set a "counter" of each of the known values. Then go through the array, increasing the counter of each value when passed. At the end, an array will be constructed based on the counters, making a number of entries of that value based on the value of the counter.

```c++
int nineSevenZeroCount = 0;
int nineSevenOneCount = 0;
int nineSevenTwoCount = 0;
int nineSevenThreeCount = 0;
int nineSevenFourCount = 0;
int nineSevenFiveCount = 0;
int nineSevenSixCount = 0;
int nineSevenSevenCount = 0;
int nineSevenEightCount = 0;
int nineSevenNineCount = 0;
int nineEightZeroCount = 0;
int nineEightOneCount = 0;
int nineEightTwoCount = 0;
int nineEightThreeCount = 0;
int nineEightFourCount = 0;
int nineEightFiveCount = 0;
int nineEightSixCount = 0;
int nineEightSevenCount = 0;
int nineEightEightCount = 0;
int nineEightNineCount = 0;
int nineNineZeroCount = 0;

for (i = 0; i < a.length; i++)
{
switch
case: (a(i) == 97.0)
  {
  nineSevenZeroCount += 1;
  }
break;
//TODO: Make sure this is proper switch markup.
//Make iterations of these for each value.
}
```

Despite the number of operations, this is still a constant multiple of a function that iterates through the array, having a time complexity of O(N). For longer lists of data that 

## Task 6

If the arrays were sorted, a way to check for a sequence of O(N) would be to have a counter that updates if the succeeding element is exactly one greater than the previous one (if a(i+1) > a(i), count += 1), and if not, check if the value of the counter is as high as the current maximum, update the maximum if it is, then reset the counter. However, unsorted arrays will require an extra step, in this case a hash table will be used to convert the values, then 

After setting up the hash table, 

```c++

```

## Video Explanation

