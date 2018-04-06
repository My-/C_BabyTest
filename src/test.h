#ifndef C_BABY_TEST
#define C_BABY_TEST

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    // boolean
#include <string.h>     // string

#include "color.h"      // colors

#define FAIL (RED_TEXT "FAIL" COLOR_RESET)      // FAIL in red text
#define PASS (GREEN_TEXT "PASS" COLOR_RESET)    // PASS in green text

/**
*   Display text in choosen color.
*/
void test_display(char* text, char * color);

/**
*   Checks if actual value are true.
*/
bool test_assertTrue( bool actual, char * message );

/**
*   Checks if actual value are false.
*/
bool test_assertFalse( bool actual, char * message );

/**
*   Checks if expected string is the same as actual string.
*/
bool test_assertEqual_String( char* expected, char* actual, char * message );

/**
*   Checks if expected integer is the same as actual integer.
*/
bool test_assertEqual_Int( int expected, int actual, char * message );

/**
*   Test struct. It's like a class.
*/
extern struct test {
    void (*display)(char * text, char * color);
    bool (*assertTrue)( bool actual, char * message );
    bool (*assertFalse)( bool actual, char * message );
    bool (*assertEqual_String)( char* expected, char* actual, char * message );
    bool (*assertEqual_Int)( int expected, int actual, char * message );
} Test;

#endif
