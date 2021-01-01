# INTRO TO THE C++ LANGUAGE

## main

every program in C++ has one function, always named as **main**

main is always called when the program first executes

from main we can call other functions either written by us or provided by compiler

**int** main()

- function returns an integer

## #include

- to access the prewritten functions(standard functions that comes with the compiler)
- we include a header with **#include** directive
- it take everything in the header and paste it into your program
- it allows us to include the entire standard library - #include <bits/stdc++.h>
- we don't have to include them seperately like iostream, vector and algorithm.

## using

declares the functions and classes of the standard library

withoot the **using**, we would have to write - std: : cout instead of cout
