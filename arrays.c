// Multiple instances of a variable, same type, same data
// Example:
int my_number=1;
int my_second_number=2;
int my_third_number=3;
// BAD CODE! - As funtionality of this code grows the code gets harder to read/maintain.

Arrays:
An array is a continugios block of memory that contains multiple variables
that are the same width or specifically, the same type. Using arrays allows
you to group varaibles that represent the same kind of information together
both spacially and logically.

Array Syntax:
To declare an array, use the following syntax.
// Type name [size] = {definition}
int my_ids[32];
// This line above creates an array of 32 integers.

Setting value in an array:
If we want to set a value in a defined array, use the following syntax.
// The line below sets the 4th element (zero indexing) inside the array to 2.
my_ids[3] = 2;
// The line below sets the 1st element (zero indexing) inside the array to 2.
my_ids[0] = 2;

Using value in an array:
If we want to use a value in a defined array, use the following syntax.
// print the 5th element in an array.
printf("%d\n", my_ids[4]);

// Video Example:
#include <stdio.h>

#define MAX_IDS 32

int main(){
    // Examples:
    // int ids[MAX_IDS];
    // int ids[] = {1,2,3};
    int ids[MAX_IDS] = {0,1,2};

    printf("%d\n", ids[2]);

    ids[3] = 0x41;

    printf("%d\n", ids[3]);
}

// Arrays Exercise:
// Create an array of 10 integers. Then, set the 4th element of the array to the number "2". Then print the element.

#include <stdio.h>

int main(int argc, char **argv)
{
    // create an array of 10 integers
    int myarray[10] = {0}; // initialize all elements to 0

    // set the 4th element to 2
    myarray[3] = 2; // updated, remember zero indexing!

    // print the 4th element
    printf("%d\n", myarray[3]);

    return 0;
}
// Returned output was 2