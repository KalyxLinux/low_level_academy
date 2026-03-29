# Unions

## What is a union?

A union is a single piece of memory that can be interpreted in different ways.  
All members share the **same memory location**, and the union is the size of its largest member.

## Declaring a union

```c
union myunion {
    int i;
    char c;
};
```

## Accessing unions members

```c
union myunion u;
u.i = 0x41424344;

printf("%c\n", u.c);  // accesses lowest byte of i
```
u.c prints the character corresponding to the lowest byte of u.i.

## Why use unions

**Save memory when multiple interpretations of the same data are needed.
** Useful in low-level programming, hardware registers, or protocol parsing.

## Key points I learned

Union size = size of largest member.
Changing one member changes the underlying memory; affects other members.
Unions are not for storing multiple independent values at the same time.

## Common mistakes

Assuming all members store separate values.
Accessing a member without first initializing the union.
Confusing unions with structs (struct members have separate memory).

## Exercises

Declare a union with an int, a char, and a float. Assign a value to the int and print all members.
Create a union to interpret a 32-bit integer as four separate bytes.
Use a union inside a struct to simulate optional fields in a database record.