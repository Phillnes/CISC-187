## Question 1

The insertion sort's time complexity of O(N<sup>2</sup>) is from the average case of the algorithm needing to go through the entire array (going through the whole array by itself is O(N)), to a second factor as the number of times it goes through is dependent on the number of elements in the array. While the exact number of operations will decline as the index increases, this is not in such a way that would effect the overall pattern (it will still be close enough to N<sup>2</sup>), which is what Big O notation measures.

First, the sort goes through the array until it reaches a value that is smaller than the one before it. Once it does, it begins swapping from there. In each pass, the comparisons and swaps go through more of the array, but in an average case scenario, this starts out with a smaller number of elements being examined until the next pass goes through.

A best-case situation would simply be N, only needing to search each element of the array once, with no other passes through. A worst-case situation can be represented as a triangular number times two (each pair of elements has a compare and a swap operation performed), where every total number of steps is the sum of the number of elements and every integer below it, except the integer used as the base is one less than the total number of elements. This can be represented as (N-1)<sup>2</sup> + (N-1). The more the elements are pre-sorted, the closer the formula gets to N-1, but the process will be roughly quadratic aside from that as even one mismatched element would mean the sort will pass through the array multiple times. In Big O notation, the -1s and first-power N of the triangular formula are discarded as they become less relevant the higher the values become, leaving O(N<sup>2</sup>) as the time complexity.

See Activity-4-Image for a reference of triangular numbers and how they can be used to count insertion sort (for the worst case scenario).

## Question 2

The worst case scenario of an array N=5 is all the elements being in reverse order. For integers, an example of this would be [5, 4, 3, 2, 1]. At index == 1, 5 is simply left alone at the start of the procedure, zero comparisons or swaps. At index == 2, 4 is compared to the only number before it, 5, and a swap is performed. As the index increases, more comparisons are performed on previous elements. In this worst-case scenario, the swap operation is always performed with every comparison, meaning the total number of actions is doubled from a best-case scenario of only comparisons being performed. The number of comparisons can be summarized as 1 + 2 + ... + (N-2) + (N-1). Including searches, this is doubled.

For N=5, this is 2 * (1 + 2 + 3 + 4) which is 20.

## Question 3

### 3a

This checks over each element of a string, looking to see if it matches with the given character. Since it has a return if it runs in to the character, it could potentially be as short as running one check. The worst-case scenario of this would be O(N), where N is the string's length, needing to search all the way to the end of the string.

### 3b

The represents a linear search, a binary search would be more efficient assuming the best case scenario (the string is already in alphabetical order). However, when it comes to strings, this is an unlikely situation, so performing a binary search is often not the most optimal way to look through it.

```c++
function containsX(string) {
	foundX = false;
	int min = 0;
	int max = string.length - 1;
	while(min <= max) {
		int i = (min + max) / 2;
		if (string[i] < "X") {
			min = i + 1;
		}
		if (string[i] > "X") {
			max = i - 1;
		}
		else {
			foundX = true; 
		}
	}
	return foundX; 
}
```
