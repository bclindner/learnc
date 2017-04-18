# Hello World

The anatomy of a basic C program is as follows:

The program begins with definitions and *includes* - libraries to be used in the program being written. In this case, we need basic I/O operations (as most programs do). So, we include <stdio.h>:

```c
#include <stdio.h>
```

The program then needs a *main function* - usually set to `int` type, to allow error codes to be sent - that contains the code that the computer runs when the program is launched. It looks like this, usually:

```c
int main(int argc, char **argv){
  // code goes here
}
```

The `int argc, char **argv` parts allow access to console arguments - this is elaborated upon further in the `args` module.

## Printing

Printing is a little weird in C - there are multiple functions to achieve the task. Two major categories of printing functions exist, with several variants:

* `puts()` is the simplest of the two: it writes a preformatted string to `stdout` and appends a newline.
* `printf()` allows for formatting of the string inline, and does not append a newline. `puts()` will do in a lot of cases, but when you need to include variables in your string, it's much easier to use `printf`.

Variants can be found using `man 3 puts` and `man 3 printf`. The most notable variants are `fputs()` and `fprintf()`, which allow custom streams to be set - good for writing to a file, or to stderr!

## Compiling

To compile a single C program, run:

```sh
cc helloworld.c
```

This writes a file called `a.out` to the directory in which the compiler was run. We can use the -o option to make the filename different:

```sh
cc -o helloworld helloworld.c
```
