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

## INPUT AND OUTPUT

**NOTE** - scanf and printf are faster but cin and cout can obtain the same speed by adding two lines mentioned below

cin - input

cout - output

input and output is sometimes a botttleneck to a program

### FASTER I/O

so we add the following lines to the beginning of the code to make input/output more efficient:

- ios::sync_with_stdio(0);
- cin.tie(0);

#### ios::sync_with_stdio(0);

- toggles off the synchronization of all the C++ standard streams with their corresponding standard C streams
- called before the program performs its first I/O operation

#### cin.tie(0);

tie() - a method which simply guarantees the flushing of **std::cout** before **std::cin** accepts an input

#### RECOMMENDED

cout << "\n" instead of cout << endl;
endl is slower because it forces a flushing stream

### MEMBER FUNCTION

#### getline(char \*buffer, int length):

Reads a stream of characters into the string buffer, it stops when

- it has read lenght-1 characters or
- when it finds a "\n" or the end of the file

##### ex01

string s;

getline(cin, s);

##### ex02

char name[20];

cin.getline(name, 20)

### WHEN AMOUNT OF DATA IS UNKNOWN

while (cin >> x) {

    // code

}

- reads input until there is no more data available in the input

### FILES FOR INPUT/OUTPUT

- freopen("input.txt", "r", stdin)
- freopen("output.txt", "w", stdout)

program reads the input from "input.txt" and writes the output to the file "output.txt"
