# Functions

## What is a function?

A function is a reusable block of code that performs a single logical task.

## Why use functions?

- Reuse code  
- Separate concerns  
- Make programs more readable and maintainable

## Function syntax

```c
return_type name(parameter_list)
{
    // code
};
```

## Example
```c
int add(int x, int y)
{
    return x + y;
};
```
called from main:
int result = add(1, 2);

## Return values

Functions can return a value to the calling code.
return sends the value back to where the function was called.

## Function naming and style

- Name should describe what the function does.
- Each function should perform a single logical task.
- Example good names:
    int intializa_database(database_t *d);
    int destroy_database(database_t *d);

## What I learned

Functions make code modular.
They also allow you to seperate logic from main execution flow.

## Common mistakes

Multiple unrelated tasks in a single function
Forgetting to return a value if the function has a return type
Typo in function calls (prinf -> printf)

## Exercises

functions_basics.c