# C BabyTest
### This is a "baby" (simple) test library for C language. Testing for beginners.


Usually, then I code I write test just to be sure code works as expected. C is not nicest (easy to understand) language to work with, especially when you start to learn to code. Because of time pressure on projects I had I didn't want invest time to check available C Testing libraries. So I created my own simple "C BabyTest" library.
### With "C BabyTest" you can:
- `Test.assertTrue(bool actual, char * message):bool` : Test if `actual` is really `true`.
- `Test.assertFalse(bool actual, char * message):bool` : Test if `actual` is `false`.
- `Test.assertEqual_String(char * expected, char * actual, char * message):bool` : Test if `actual` string are the same as `expected` string.
- `Test.assertEqual_Int(int expected, int actual, char * message):bool` : Test if `actual` integer are the same as `expected` integer.

Note each test function returns true if a test is passed.

### Example:
Is always good practice to separate test code from main programs code. But for this example for simplicity reasons is not the case

```C
#include <stdio.h>
#include <stdbool.h>    // to suport booleans
#include "test.h"       // this library
// Note: this include shoud point to location where library is.
// In my case it is in the same folder.

#define MY_AGE 30 // constant to hold my age

// function you want to test
bool imOlder(int yourAge){
    // some creazy logic you not sure about
    return MY_AGE < yourAge;
}

int bobAge = 20;    // Bob age

// you know what you older then Bob.
bool shouldBe_True = imOlder(bobAge);

// test if function implementation is correct
Test.assertTrue(shouldBe_True, "I'm older then Bob");

```
To run on Windows + VisualStudio hit run.
To run (on Linx):
```bash
# go to yours tests files folder
# compile all ".c" files to "myTest.out" file
gcc ./*.c -o ./myTest.out

# if no compile errors run it
./myTest.out
```
So then you run it result is:

> <p><span style="color:white">I'm older then Bob: </span> <span style="color:yellow"> true </span> - <span style="color:red"> FAIL </span><p>
So you know what your implementation is wrong. Lets fix it. Change function to:
```C
bool imOlder(int yourAge){
    // some creazy logic you not sure about
    return MY_AGE > yourAge; // changed "<" to ">"
}
```
Then you run result now:
> <p><span style="color:white">I'm older then Bob: </span> <span style="color:yellow"> true </span> - <span style="color:green"> PASS </span><p>

And know you know what function works as expected.


<!-- - ![#f03c15](https://placehold.it/15/f03c15/000000?text=+) `#f03c15`
- ![#c5f015](https://placehold.it/15/c5f015/000000?text=+) `#c5f015`
- ![#14f02a](https://placehold.it/150x15/14f02a/000000?text=+) `#14f02a` -->
