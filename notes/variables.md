# Variables and Variable Scopes

## What is a variable?

A variable is a named piece of memory that stores a value.  
Each variable has a **type** that determines what kind of data it can store (int, char, float, etc.).

## Declaring variables
```c
int personID = 0;    // integer variable
int person2ID = 1;
```

## Variable Scopes

Global scope

A variable declared outside all functions. Accessible anywhere in the file.

```c
int g_NumPersons = 0; // global
```

Local scope

A variable declared inside a function. Accessible only within that function.

```c
int main()
{
    int personID = 0; // local variable
};
```

## Sub-scope / Block scope

A variable declared inside { } is limited to that block.
```c
int main()
{
    int personID = 0;
    {
        int personID = 10; // new variable, only inside this block
    }
};
```

## Key points I learned

Variables must be declared before use.
Scope determines where a variable can be accessed.
Global variables are accessible everywhere but harder to manage.
Local and block variables are safer and predictable.

## Common mistakes

Using a variable outside its scope.
Declaring two variables with the same name in the same scope.
Forgetting to initialize variables before using them.

## Exercises

Declare a global variable g_counter and increment it inside main().
Create a local variable inside a function and print it.
Create a nested block and declare a new variable with the same name as an outer variable. Print both inside and outside the block.