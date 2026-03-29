# Conditionals

## What are conditionals?

Conditionals allow a program to make decisions based on conditions.

## if statement

Executes code only if a condition is true.

```c
if (x == 42)
{
    printf("You said 42!\n");
}
```

## else statement

Runs when the condition is false.

```c
if (x == 42)
{
    printf("You said 42!\n");
}
else
{
    printf("Something else\n");
}
```

## else if

Used to check multiple conditions in sequence.

```c
if (x == 42)
{
    ...
}
else if (x == 24)
{
    ...
}
else
{
    ...
}
```

## Key Idea

The program evaluates conditions from top to bottom and stops at the first true condition.

## Logical Operators

* `&&` → AND (both conditions must be true)
* `||` → OR
* `==` → equality check

## What I learned

Conditionals control the flow of execution.
They are the foundation for decision-making in programs.

## What confused me

It’s easy to forget:

* `=` is assignment
* `==` is comparison

## Exercises

* conditionals.c
