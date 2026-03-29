# Special Structures

## What are special structures?

Structures are logical blocks of memory grouping variables of multiple types.  
Sometimes, compilers **add padding** for alignment, which changes structure size between systems.

## Problem

When serializing data between different systems (different architectures), structure sizes might not match.  
Padding can lead to unpredictable results if not handled.

## Packed structures

Use the `packed` attribute to remove padding and ensure predictable size:

```c
struct __attribute__((packed)) mystruct {
    int i;
    char c;
};
```
Guarantees no extra bytes are inserted between members.
Useful for cross-platform serialization or network protocols.

## Video Example

```c
struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

printf("Size of employee_t: %zu\n", sizeof(struct employee_t));
```
Demonstrates typical structure size (may include padding).
Compare with packed structures for predictable size.

## Exercise

Create an employee structure with:

name as a character buffer
age as an integer
```c
struct Employee {
    char name[64];
    int age;
};

struct Employee emp = {"Steve", 42};
printf("%s, aged %d years\n", emp.name, emp.age);
```
Expected output:

Steve, aged 42 years

## Key points I learned

Structures can have padding added by the compiler.
Use __attribute__((packed)) to prevent padding.
Packed structures are important when exchanging data between systems.
Structures still provide logical grouping of different data types.

## Common mistakes

the packed attribute.
Assuming structure size is always sum of member sizes.
Using packed unnecessarily (may reduce performance on some architectures)