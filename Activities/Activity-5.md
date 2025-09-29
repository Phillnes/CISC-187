## Question 1

```c++
hash<int> ;
```

## Question 2

```c++
string name = "Phillip Nesbitt";

hash<string> hashedName;

hashedName(name);
```

## Question 3

A tombstone is used to prevent a hash search from stopping when it comes across what would be an empty cell from the deletion of an older entry. However, tombstones still take up space in a search function. Over time, a larger number of unfilled tombstones will make a hash search less efficient, as the program has to pass over what are essentially "blank" key-value pairs. See Activity 5 image.
