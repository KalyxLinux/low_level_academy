# Preprocessor Directives

## What is a preprocessor?

The preprocessor runs **before compilation**. It handles macros, file includes, and conditional compilation.

## Common preprocessor directives

- `#define` : Defines a macro  
  Example: `#define PI 3.14`

- `#undef` : Undefines a macro  
  Example: `#undef PI`

- `#include` : Includes a file  
  Example: `#include <stdio.h>`

- `#if` : Conditional compilation  
  Example: `#if DEBUG`

- `#ifdef` : Checks if a macro is defined  
  Example: `#ifdef DEBUG`

- `#ifndef` : Checks if a macro is not defined  
  Example: `#ifndef DEBUG`

- `#elif` : Else if for `#if`  
  Example: `#elif DEBUG == 2`

- `#else` : Else for `#if`  
  Example: `#else`

- `#endif` : Ends a `#if`, `#ifdef`, or `#ifndef` block  
  Example: `#endif`

- `#error` : Generates a compiler error  
  Example: `#error "Error message"`

- `#pragma` : Compiler-specific behavior  
  Example: `#pragma once`

- `#line` : Sets original line number and filename  
  Example: `#line 28 "myfile.cpp"`

- `#warning` (GCC) : Compiler warning  
  Example: `#warning "Warning message"`

## Key points I learned

- Preprocessor runs **before compilation**.  
- Useful for defining constants, conditional compilation, and including files.  
- Directives don’t exist at runtime; they affect **how the compiler sees your code**.

## Common mistakes

- Forgetting to end `#if`/`#ifdef` blocks with `#endif`.  
- Using `#define` instead of `const` for some cases (may cause type issues).  
- Typos in macro names (case-sensitive).

## Exercise

1. Define a macro `DEBUG` and use `#ifdef DEBUG` to print a message.  
2. Use `#undef` to remove a macro and see what happens.  
3. Use `#error` or `#warning` to generate a compile-time message.