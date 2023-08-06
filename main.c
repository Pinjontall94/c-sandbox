/* C Sandbox */
#include <stdio.h>


// inline C function to increment an integer
int inc(int number) { return number + 1; }


// Takes a copy of what's passed, returns nothing, so input doesn't mutate!
void broken_inc(int number) { number++; }


// This is a prototype! It lets us use some_num before it's implemented
int some_num(void);

// The following is NOT the same! Basically turns off input type-checking for
// this function
//
// int some_num();


// show how many bytes a type instance uses, e.g. an int
// (NOTE: 'zu' is the format specifier for an unsigned long/size_t, which this
//  apparently is...)
void how_big(void) {
    printf("How big is an int? %zu bytes wide.\n", sizeof(int));
}


// Pointer shit
void pointer_intro(void) {
    int x = 10;
    int *px = &x;
    printf("int x: %d\n", x);
    printf("pointer to x (called px): %p\n", &*px);
}


// More pointer shit
void pointer_example(void) {
    int i;
    int *p;   // create var p of type "int*"

    p = &i;   // p now points to i

    i = 10;   // i is now 10
    *p = 20;  // i is now 20 _through manipulating a de-referenced p_

    // and we can prove this...
    printf("i: %d\n", i);
    printf("*p: %d\n", *p);  // think of *p as like a nickname for i
}



int main(void) {
    int another_input = some_num();
    int input = 68;
    int result = inc(another_input);

    broken_inc(result);  // won't do anything to result
    how_big();
    pointer_intro();
    pointer_example();

    printf("\nResult: %d\n", result);
    return 0;
}


int some_num(void) {
    return 419;
}
