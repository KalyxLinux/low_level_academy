# Structures

## What is a structure?

A structure is a **block of memory** that can store multiple variables of **different or same types**.  
It is used to represent a logical grouping of related data.

## Structure Syntax

```c
struct mystruct {
    int i;
    char c;
};
```
Creates a type called struct mystruct.
Members can be accessed using the . operator.

## Array of structures

You can create multiple instances of a structure in an array:

```c
struct mystruct mystructs[10];
mystructs[0].i = 42;
mystructs[0].c = 'A';
```

## Example: Employee array

```c
struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

struct employee_t employees[MAX_EMPLOYEES];
for (int i = 0; i < MAX_EMPLOYEES; i++) {
    employees[i].income = 0;
    employees[i].ismanager = false;
}
```
Access members with the dot operator: employees[10].income.
Structures are useful for modeling complex data like database records.

## Key points I learned

Structures allow grouping of related variables.
Array of structures lets you store multiple structured data entries.
Always initialize members to avoid undefined values.

## Common mistakes

Confusing arrays of structures with arrays inside a structure.
Forgetting to access members using ..
Using uninitialized structure members.

## Exercises

Define a struct book with title, author, and pages. Create an array of 5 books and initialize them.
Define a struct point with x and y coordinates. Print the values for multiple points.
Create an array of struct employee_t and set the ismanager flag for a few employees.