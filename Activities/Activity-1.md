## Question 1

Arrays are made by declaring a data type, then square brackets. To create an array of a specific size, the number of elements must be put inside the square brackets.

```c++
int numbers[100];
```

## Question 2

The size of each element in an array depends on the data type. For integers, seen with int numbers[100] above, ints have a size of 4 bytes, that being the value of each element in the array. The following code will also return 4:

```c++
return sizeof(numbers(0));
```

## Question 3

For the 100 element array, this is how long each operation will take:

* Reading: Reading an array will always take one step, regardless of where in the array the element would be.
* Searching for value not in array: The code will have to search every element before confirming that the one searched for is not present. This means that 100 searches will be performed, and with each search being one step, the total number of steps will simply be 100.
* Insertion at beginning: Inserting an element at the beginning of an array will move every element over, each movement being a step. For the array of 100, this means one step of adding the new element, then 100 steps to move each element over, making a total of 101 steps.
* Insertion at end: Inserting an element at the end of an array will not change the existing elements, so no additional steps are needed. This will only take one step.
* Deletion at beginning: Deleting from an array works just like inserting in terms of the steps, where changing the beginning will require shifting all the elements over, while changing the end will not. So, deleting the first element from an array of 100 will take one step to remove the element, then 99 steps to move the other elements over, giving a total of 100 steps.
* Deletion at end: As said above, deletion works with the same element-shifting as addition, so deleting the element at the end only takes one step.

## Question 4

A search looking for every instance of an element in an array will not stop at finding the first one, and so will look through the entire array. A counter will be included that has 1 added to it for every found instance. If the array has N elements, the number of searches will be N. For the example given in the question of searching for "apple," if a counter is updated for each search find, the result will be N plus the number of times "apple" appears in the array.

## Question 5

To find the memory address of an array in C++, std::addressof must be used.

```c++
return addressof(numbers);
```

## Video Link

https://sdccd.us-west-2.instructuremedia.com/embed/a828221c-d28e-4c0d-aff6-15175a6a7bef
