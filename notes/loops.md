# Loops

## What is a loop?

A loop allows a program to repeat a block of code until a condition is met.

## Why loops matter

Without loops, repetitive tasks would require writing the same code many times.

## for loop

Used when the number of iterations is known.

```c
for (int i = 0; i < 10; i++)
{
    // code
}
```

### Structure

* initialization → runs once
* condition → checked before each iteration
* iteration → runs after each loop

## while loop

Runs as long as a condition is true.

```c
int i = 0;
while (i < 10)
{
    i++;
}
```

### Key point

You must manually update the condition (or risk an infinite loop).

## do-while loop

Executes at least once before checking the condition.

```c
int i = 0;
do
{
    i++;
}
while (i < 10);
```

## Key Idea

All loops do the same thing: repeat code.
They differ in when and how the condition is checked.

## What I learned

Loops are essential for working with arrays and repetitive operations.

## What confused me

At first, it wasn’t clear when to use:

* for vs while

Now:

* for → fixed iterations
* while → condition-based

## Exercises

* loops.c