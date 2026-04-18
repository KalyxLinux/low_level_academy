# Static Memory Allocation

## What is it?
Static memory allocation is when memory is allocated at compile time.  
The size and lifetime of the memory are fixed before the program runs.

## Why does it exist?
- Simple and fast memory allocation  
- No need to manually manage memory (no malloc/free)  
- Used when the size of data is known ahead of time  

## Example

```c
#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5}; // fixed-size array

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
};
```

## Key points I learned

Memory size is fixed at compile time.
Stored on the stack (for local variables).
Automatically managed (freed when scope ends).
Faster than dynamic allocation.

## Common mistakes

Trying to resize statically allocated arrays (not possible).
Stack overflow from allocating very large arrays.
Assuming static memory behaves like dynamic memory.

## Static vs Dynamic (quick comparison)

Static Allocation
-Compile-time
-Fixed size
-Stack memory
-Automatic

Dynamic Allocation
-Runtime
-Flexible size
-Heap memory
-Manual (malloc/free)