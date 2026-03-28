Functions:
Functions are a block of seperated from the rest of the code that performs one logical task.
//Example: the main function which is expected by and ran first by the compiler at program start.
main() 

Making your own functions:
Extracting a piece of code that can be seperated into its own code block to be reused.
When done that code block becomes a function.

// Example:
// return_type name (parameter list) {..code..}
int add(int x, int y)
{
    int z = x+y;
    return z;
}
...
int main()
{
    int ans = add(1,2);
    printf("%d\n", ans);

    return 0;
}
// Return breakdown:
// return is ran in the code above a few times
// when a function is ran, at some point we want the function
// to go back to where the function was originally called to
// contiue the original functiion -- return
// To get a value put into a variable as a result of the function
// most functions return a "value". Above for example
// add returns an integer and is stored in the variable ans in the main function

Naming and Styling:
It is expected that a function will perform one logical thing.
The name should clearly describe what the function does.
If you find your function doing multiple logical things, you 
should either change the logic or the name of the function.

Good function examples:
int initialize_database(database_t *d)
{
    ...
}

int destroy_database(database_t *d)
{
    ...
}

// Video Example:
#include <stdio.h>

// return_type name (list of arguements)
//{
//  ..define the function..
//}

int add(int x, int y) 
{
    int z = x+y;

    return z;
}

int main(int argc, char *argv[])
{
    int other_int = add(1,2);
    prinf("%d\n", other_int);

    return 0;
}
// returns 3 after running