## Question 1

See the file Activity 10 Map.png. This graph is meant to represent a hypothetical map of a city by major landmarks/areas and how they are connected to each other.

## Question 2

See the file Activity-10-Code.cpp.

## Question 3

The breadth-first algorithm uses a while loop and for-each loop nested within when comparing vertices. While unlikely to be around this high due to the limited ways a typical graph's vertices connect with each other, this nesting makes for a worst-case time complexity of O(n^2).

The depth-first algorithm uses a stack instead of a queue, but also operates based on a for-each loop nested in a while loop, giving a similar worst-case time complexity of O(n^2). A key difference is that the "visited" operation is outside of the for-each loop in a breadth-first algorithm, within for a depth-first.

As the names suggest, depth-first travels more towards the end of a graph first; to the "depths" of it, so to speak, a "long" search. Breadth-first travels across the branches and evaluates the branches first, a "wide" search. Breadth-first would be better at finding a path in a graph that has a greater number of spreading branches, while depth-first would be better for a graph with less branches but longer paths.

## Video Explanation

https://sdccd.us-west-2.instructuremedia.com/embed/ac13873c-e90e-48be-9193-94d0568cbb21
