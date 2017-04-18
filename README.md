# bclindner's C examples

by Brian C. Lindner, 2017

## Foreword / Introduction

As a Web developer who writes mostly JavaScript, conventional programming languages like C, C++, Java and the like are a little over my head. Static typing, header files, compilers, makefiles, string operations (and their distinct lack of operators), and what feels like 500 slightly different ways to print a line to the console have made the language feel like the untouchable programming language of *computer wizards*. To help myself along, I made this repo: a set of modules explaining C concepts.


## Prerequisites & Author's Notes

This repo was built with only myself in mind, but you may find it useful if you come from a similar development background - an at least rudimentary understanding of GNU/Linux command-line operation, some experience with other object-oriented languages, and maybe the ability to RTFM if this doesn't explain enough. (This guide will never be a replacement for `man 3`, no matter how hard I try - remember that)

It should be noted that this guide was built with POSIX-compliant C in mind, and all files were built and tested on a standard GNU/Linux machine, and all commands are given under the assumption that the user has access to a GNU/Linux terminal environment running an sh-compatible shell.

## How to Use the Modules

This repo is set up in a number of "modules" each explaining simple C concepts.

Each one of these modules is set up in a standalone subfolder with the following format:

* `module/`: The folder of the module.
  * `module/module.c`: The source code of the module.
  * `module/README.md`: The documentation for the module. Each module's README attempts to explain the concept as best as possible.
  * `module/Makefile` (optional): The makefile for the module, if available - if this is in the module, you can just type `make` to compile.

To compile and run any program to see it in action, you can use your default C compiler (usually denoted by `cc`, and usually `gcc`), using the -o option to control the output file:

```sh
$ cc -o code code.c
```

## License

The contents of this repository are protected under the GPLv3 license, in "LICENSE.md" of this repository or at [gnu.org](https://www.gnu.org/licenses/gpl-3.0.en.html).
