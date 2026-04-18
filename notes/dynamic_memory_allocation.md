# Dynamic Memory Allocation

## What is it?
Dynamic memory allocation allows you to request and manage memory at runtime instead of compile time.  
This means you can create data structures whose size is determined while the program is running.

## Why does it exist?
- Arrays in C have fixed size at compile time.  
- Sometimes you don’t know how much memory you need ahead of time.  
- Dynamic allocation lets you request memory as needed from the heap.

## Common functions

```c
#include <stdlib.h>

void *malloc(size_t size);   // allocate memory
void *calloc(size_t n, size_t size); // allocate + initialize to 0
void *realloc(void *ptr, size_t size); // resize memory
void free(void *ptr);        // free memory
```

## Exercise

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = malloc(5 * sizeof(int)); // allocate space for 5 ints

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr); // free allocated memory

    return 0;
};
```
## Key points I learned

malloc allocates memory but does NOT initialize it.
calloc allocates and initializes memory to zero.
Always check if allocation returned NULL.
Memory allocated must be freed using free.
Memory lives on the heap, not the stack.

## Common mistakes

Forgetting to call free → memory leaks
Using memory after it has been freed
Not checking if malloc returns NULL
Assuming malloc initializes memory (it does not)

