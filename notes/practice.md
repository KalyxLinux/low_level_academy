# Practice Exercises – Variables, Arrays, Strings, and Core Syntax

**BREAKPOINT:**  
I chose to stop before continuing to pointers to internalize what I learned more by practicing.  
These exercises are not part of the lesson directly but help reinforce the concepts.

---

## Exercise 1 – Variables, Arrays, and `%d` / `%s`

**Task:**  
- Declare an array `int scores[5]` and initialize with 5 scores.  
- Declare `char name[20]` and store your name.  
- Calculate the sum of scores.  
- Print name and sum using `printf` with `%s` and `%d`.  

**Initial attempt (syntax errors):**

```c
#include <stdio.h>

{
    int scores[5] = {24, 42, 33, 23, 31};
    char name[64] = ("Kalyx");

    int sum = (int scores[0] + int scores[4]);
}

int main()
{
    printf("%s, %d", name has made sum baskets);

    return 0;
};
```