# Ex 1

# Ex 2

CFLAGS="-Wall" - report all warnings

-g flag for debugging

we make a clean - how to clean up afterwards

# Ex 3 

**header file** - stdio.h

# Ex 4

**valgrind**

# Ex 5

**include** statements import contents of one file into 
source. '.h' files are header files

main must return int and take 2 params, 
**argc** = number of args, **char * **= array of charcters

statements (except for logic) end in **;**

# Ex 6

char is declared with single quote

string or array of chars 'char[]' is declared with double quotes

# Ex 7

# Ex 8

sizeof returns byte length

# ex10

    for(INITIALIZER; TEST; INCREMENTER) {
      CODE;
    }

# ex11

not really a bool type in c

while loops

# ex13 Switch statements

* The compiler marks a place in the program where the switch-statement starts
* it evaluates the expression in switch(n) to come up with a number
* The compiler has also translated each of the `case` blocks like `case 'A':`
into a location in the programm
* if a matching case is found, the code 'jumps' to that line until `break` 
statement

Always include a `default:`

# ex14 Functions

# ex15 intro to pointers

What I think pointers do: a byte that points to another variable??

## Explaining Pointers:

A variable name like ages is actually a memory address

C does the following with arrays:

* Create a block of memory inside the computer
* "Point" the name ages at the beginning of that block
* "Index" into the block by taking the base address of ages and getting the 
element that's i away from there
* Converting that address at ages+i into a valid int of the right size, 
such that the index works to return what you want: the int at index i




