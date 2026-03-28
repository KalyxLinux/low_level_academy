Strings:
"A string is an array of characters."
An array is a block of memory that contains a set of variables
that are the same type. if those variables are characters you
have a string.

Test string:
char my_str[] = {'h', 'e', 'l', 'l', 'o'};
printf("%s\n", my_str);
// Returns hello in the output

Strings in C:
A string in C has a special characteristic. Which makes it special/dangerous.
All strings in C are ended with a null byte.
If your operation fails to end in a null byte, the operation will complete going.

Context:
if you run opertations like strcpy, which copies data from the src buffer to the dest buffer.
It will ONLY STOP COPYING/PRINTING IF IT ENCOUNTERS THAT ZERO BYTE.
The code above has security vulnerability-end with zero to prevent problems.
// Fix for the Test string code above
char my_str[] = {'h', 'e', 'l', 'l', 'o', 0};
printf("%s\n", my_str);

// Video Example:
#include <stdio.h>

#define MAX_IDS 32

int main()
{
    int ids[MAX_IDS] = {0,1,2};

    char mystr[] = {'h', 'e', 'l', 'l', 'o', 0};

    printf("%s\n", mystr);
}
// Prints out string hello in the output

// Strings Exercise:
// Create copy of string 'hehe' using hex syntax, ensure that they are the same strings!

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    // this is a string
    char *str = "hehe";

    // create the same string
    // as a character array
    char otherstr[] = {'h', 'e', 'h', 'e', 0};

    if(!strcmp(str, otherstr))
    {
        printf("Yay!\n");
    }
    else 
    {
        printf("Nay!\n");
    }

    return 0;
}
// The output returns Yay!