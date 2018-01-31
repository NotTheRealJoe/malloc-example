# Differences between `malloc()` and `calloc()`
This is a sample project that demonstrates the differences between `malloc()` and `calloc()` in C.

Both `malloc()` and `calloc()` are stored in the system library **stdlib.h**.

The main difference between the two is that `malloc()` simply allocates memory and makes it available to your program. `calloc()` has the additional function of clearing the memory that you are allocating. `malloc()` is fine to use when the entire memory that you are allocating is going to be overwritten by an assignment. If less than the full amount of memory may be used, it is better to use `calloc()` to avoid unexpected results.

`malloc()` takes a single argument, the number of bytes to allocate. `calloc()` takes two arguments: the number of items to allocate memory for, and the size of each of those items.

For example, to allocate a 16-character string, the call for `malloc()` would be
```C
malloc(16 * sizeof(char));
```
but for `calloc()` it would be
```C
calloc(16, sizeof(char));
```

In this program, some memory is defined as a string and then freed. `malloc()` is then called, and the contents of the memory allocated by it are printed out as hex data. Note that some of the old data from the first part of the program that has already been freed is visible in the memory allocated by `malloc()`. Then, that memory is freed and `calloc()` is called. Note that even though `calloc()` is probably resuing the same memory we just freed, the contents is initialized to zeros.