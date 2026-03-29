# Arrays

## What is an array?

An array is a contiguous block of memory that stores multiple values of the same type.

## Core Idea

Instead of creating multiple variables, arrays let you group related data together and access them using an index.

## Syntax

```c
int arr[10];
```

This creates space for 10 integers.

## Indexing

Arrays use zero-based indexing:

* arr[0] → first element
* arr[3] → fourth element

## Example

```c
int ids[3] = {0, 1, 2};
printf("%d\n", ids[2]); // prints 2
```

## Setting Values

```c
ids[3] = 2;
```

## Why arrays matter

* organize related data
* reduce repetitive variables
* foundation for more complex structures

## What confused me

At first, I mixed up:

* index vs position
* forgetting arrays start at 0

## Key realization

The array itself is just a block of memory, and indexing is just offsetting from the start.

## Exercises

* arrays_exercise.c
