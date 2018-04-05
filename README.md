# C BabyTest
### This is a "baby" (simple) test library for C language. Testin for beginers.


Usualy then I code I wite test just to be sure code works as expected. C is not niceset (easy to understand) language to work with, aspecialy then you start learn coding. Because of time presure on projects I had I didn't wanted invest time to check available C Testing libraries. So I created my own simple "C BabyTest" library.
### With "C BabyTest" you can:
- `Test.assertTrue(bool actual, char * message):bool` : Test if `actual` is realy `true`.
- `Test.assertFalse(bool actual, char * message):bool` : Test if `actual` is `false`.
- `Test.assertEqual_String(char * expected, char * actual, char * message):bool` : Test if `actual` string are the same as `expected` string.
- `Test.assertEqual_Int(int expected, int actual, char * message):bool` : Test if `actual` integer are the same as `expected` integer.

### Exsample:

```C
#define MY_AGE 30 // constant to hold my age

// say you implemented function
bool imOlder(int yourAge){
    // some creazy logic you not sure about
    return MY_AGE < yourAge;
}

int bobAge = 20;    // Bob age

// you know what you older then Bob.
bool shouldBe_True = imOlder(bobAge);

//So you want to be sure your function logic is correct
Test.assertTrue(shouldBe_True, "I'm older then Bob");

```
So then you run it result is:

> <p><span style="color:white">I'm older then Bob: </span> <span style="color:yellow"> true </span> - <span style="color:red"> FAIL </span><p>
So you know what your implementation is wrong. After fixing:
```C
bool imOlder(int yourAge){
    // some creazy logic you not sure about
    return MY_AGE > yourAge;
}
```
Then you run result now:
> <p><span style="color:white">I'm older then Bob: </span> <span style="color:yellow"> true </span> - <span style="color:green"> PASS </span><p>
