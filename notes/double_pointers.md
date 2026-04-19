# Double Pointers

## What is it?
A double pointer is a pointer that stores the address of another pointer.  
Instead of pointing directly to a value, it points to a pointer that points to a value.

## Why does it exist?
- To modify a pointer inside a function  
- To work with dynamic memory more flexibly  
- Used in complex data structures (linked lists, trees, etc.)  

## Syntax

```c
int x = 10;
int *p = &x;     // pointer to int
int **pp = &p;   // pointer to pointer
```

## Example

```c
#include <stdio.h>

int main(void)
{
    int x = 42;

    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d\n", x);
    printf("Value using p: %d\n", *p);
    printf("Value using pp: %d\n", **pp);

    return 0;
};
```

## Modifying a pointer using a function

```c
#include <stdio.h>

void set_value(int **ptr)
{
    static int y = 100;
    *ptr = &y; // change where the original pointer points
}

int main(void)
{
    int x = 42;
    int *p = &x;

    set_value(&p);

    printf("%d\n", *p); // prints 100

    return 0;
};
```

## Key points I learned

*p = value at pointer
**pp = value at pointer to pointer
Double pointers are used when you need to modify a pointer itself
Common in dynamic memory and advanced data structures

## Common mistakes

Confusing *p vs **pp
Passing int * instead of int ** to functions
Not understanding what level of indirection you’re accessing