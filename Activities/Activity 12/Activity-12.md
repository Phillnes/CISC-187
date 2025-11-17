## Question 1

The base case is when the value for low becomes greater than the value for high, giving a return that stops the recursion. In the example given, this would be low = 12, high being a constant 10.

## Question 2

Running factorial(10) will cause an infinite recursion. Because the base case is only if n is equal to 1, subtracting 2 in each recursion will skip over that for any even-numbered input. However, a positive odd-numbered input will still count down to 1, and would at least print out a function with a definitive end (it just will not be a factorial since every other factor is skipped).

## Question 3

Because of the way the function takes in two variables, it can have differing end or start points, and thus the base case would need to be based on a relation between the variables, similar to what is given in Question 1. A base case would be if low > high, since the recursion is based on subtracting 1 from the variable high. Altogether, a fixed function would look like this:

```
def sum(low, high)
    return 0 if if low > high
    return high + sum(low, high - 1)
end
```

## Question 4

See the C++ file.

## Video Explanation

