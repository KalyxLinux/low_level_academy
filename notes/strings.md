# Strings

## What is a string?

A string in C is an array of characters that ends with a null terminator (`\0`).

## Core Idea

Strings are not a special type in C.
They are just character arrays with a convention: they must end with a zero byte.

## Example

```c
char mystr[] = {'h', 'e', 'l', 'l', 'o', 0};
```

## Null Terminator

The `\0` (null byte) tells functions where the string ends.

Without it:

* printing continues past the intended data
* memory may be read incorrectly
* leads to bugs or vulnerabilities

## Why this matters

Functions like `printf` and `strcmp` rely on the null terminator to stop reading.

## Key realization

C does not track string length automatically.
Everything depends on the presence of the null byte.

## What confused me

At first, I didn’t understand why strings needed a `0` at the end.
It felt optional, but it’s actually required for correct behavior.

## Exercises

* strings_exercise.c

## Extra Note

I had to look up ASCII hex values (e.g. 'h' = 0x68).  
This helped me understand that characters are just numbers in memory.