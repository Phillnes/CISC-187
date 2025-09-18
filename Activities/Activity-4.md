## Question 1

## Question 2

## Question 3

### 3a

This checks over each element of a string, (...) the worst-case scenario of this would be O(N), searching the whole length of the string, where N is the string's length.

### 3b

The code represents a linear search, a binary search would

```c++
function containsX(string) {
	foundX = false;
//TODO minimum
//TODO maximum
	for(let i = 0; i < string.length; i++) { 
		if (string[i] === "X") {
			foundX = true; 
		}
	}
	return foundX; 
}
```
