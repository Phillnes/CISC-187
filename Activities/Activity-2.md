## Question 1

A linear search would take four steps to find the number 8 in the given array, one for incrementing each unit, as 8 is the fourth element in it.

## Question 2

For a binary search, the program would immediately find the number 8 as it is the central element, so it would only take one step.

## Question 3

A binary search's worst-case scenario (big O) search would be in log base 2 of the number of values. So an array of 100,000 would take up to log2(100,000) = log(100,000)/log2, which is approximately 17 searches. (About 16.6, rounded up because the decimal represents a "remainder" search.)

## Question 4

```c++
//Linear search in C++.
public void Search(array a, int t)
{
for (i = 0; i < (a.length - 1); i++)
  {
  if (array(i) = t)
    {
      return i + 1;//Returns the placement in the array that the target value is located in.
    }
  }
  return -1;
}

//Binary search in C++.
public void Search(array a, int n, int t)
{
int lower = 0;//At the beginning, the lower bound is the first element in the array (0).
int upper = n - 1;//At the beginning, the upper bound is the last element in the array (length - 1 due to arrays starting at 0).
while (lower < upper)
  {
  middle = ((lower + upper) / 2);//Starts searching by what would be calculated as the halfway point. Integer division effectively floors this result if it is an odd number.
  if (a(m) < t)//If this is true, that means the target would be further ahead in the array than the middle point (assuming the array is sorted), so a search will need to be performed later.
    {
      lower += middle + 1;//Changes the lower value for the next loop so that the new startpoint is based on the old middle, so that the next search is performed on the upper half.
    }
  else if (a(m) > t)
    {
      upper += middle - 1;//Changes the lower value for the next loop so that the new endpoint is based on the old middle, making the next search based on the lower half.
    }
    else
    {
      return middle;
    }
  }
}
```
