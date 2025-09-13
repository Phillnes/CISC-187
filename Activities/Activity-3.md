## Question 1

Big O notation does not include any added constants or multiplied numbers, so the number of steps will be represented as O(N).

## Question 2

As with Question 1, the steps would be represented as O(N<sup>2</sup>).

## Question 3

The function listed on the question represents modifying an array's contents, one step, and then making a result based on the array's length. It would take N steps to double the array's elements, then N-1 steps to take a number and add it to the previous one, the -1 is as the first step would be already taking two of the numbers in the array. The result is 2N-1, and in Big O notation, this is O(N).

## Question 4

The function listed will take three actions for each element, which is 3N. As Big O notion drops constants, this is represented as O(N).

## Question 5

Because this function is based on a cumulation of previous elements in the array, it grows in complexity based on the size of the array unlike the O(N) functions in previous questions. This closes in on being quadratic growth, with constant multiples that can be discarded in Big O notation, so its efficiency is O(N<sup>2</sup>).
