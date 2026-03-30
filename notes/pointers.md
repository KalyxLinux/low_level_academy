## Pointers

## What is a pointer

A pointer is a variable whos value equals the address of another variable.


## Creating pointers

To make a variable, first you need another variable that you want to point to.
Lets say we have an integer that we would like to reference.

## Example

```c
int x = 3;
```

To create a pointer that points to x, we have to create a pointer and set
its value equal to the address of x. We can do that with the following syntax.

## Example:
```c
int x = 3;
int *pX = &x;
```

The syntax is as follows. The * character notes that the type is a pointer.
The & character gets the "address of", which gets the address of x and puts that value in pX.

## Using pointers

To use a pointer, all you have to do is "dereference" it.
To dereference a pointer, simply add the * to the name of the pointer
to get the value at that location.

## Example:
```c
int x = 3;
int *pX = &x;
printf("%d\n", *pX);
```