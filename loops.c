Loops:
A loop rpeats the same code over and over again until some of the condition is met.
In C, you can repeat a line of code multiple times using a control flow-structure called a 'loop'
There are 3 types of loops in C.

// Bad code
int ids[32];
ids[0] = 0;
ids[1] = 0;
ids[2] = 0;
...
// The above code would continue and get messy fast.
// To counter this we instead apply loops

for loop:
A for loop is created with clauses.
-the intialiization clause: ran once the loop starts.
-the check clause: checks if the loop should keep going.
-the iteration clause: runs on every loop completion.

Example:
int i = 0;
for (i = 0; i < 32; i++)
{
    // do something
    ids[i] = 0;
}
// this loop will set i to zero at start,
// and run while is less than 32, and
// increase i every time. we can also use i
// inside that for loop to do some logic
// as a function of the iterator.

while Loop:
A while loop is really simple, it just runs the program inside the loop while the condition is true.

Example:
int i = 0;
while (i<32)
{
    // do something

    i++;
}
// Notice that in the while looop you're required to increase
// the iterator yourself, otherwise you'll have an infinite loop.

do-while:
A do-while loop is the same as the while loop, but the code inside the loop will ALWAYS execute once,
regardless of the condition.

Example:
int i = 0;
do
{
    // do something

    i==;
}
while (i<32);

//Video Example:
#include <stdio.h>

#define MAX_IDS 32

int main()
{
    int ids[MAX_IDS] = {0};

    ids[0] = 0;
    ids[1] = 1;
    ids[2] = 2;

    //loop - do the same thing, over and over
    //until some condition is met
    //
    //for loops
    //while loops
    //do while
    //

    int i = 0;
    for (i = 0;i < MAX_IDS;i++)
    {
        ids[i] = i*i;
        printf("%d: %d\n", i, ids[i]);
    }

    i = 0;
    while (i < MAX_IDS)
    {
        ids[i] = i*i;
        printf("%d: %d\n", i, ids[i]);
        i++;
    }
    i = 0;
    do
    {
        ids[i] = i*i;
        printf("%d: %d\n", i, ids[i]);
        i++;
    }
    while (i < MAX_IDS);

}
// Output return the same response in three different loops.
// Great practice-the code, and structure are starting to stick great.