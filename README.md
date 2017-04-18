# bclindner's C examples

As a Web developer who writes mostly JavaScript, conventional programming languages like C, C++, Java and the like are a little over my head. Static typing, header files, compilers, makefiles, string operations (and their distinct lack of operators), and 500 different ways to print a line to the console have made the language feel like the untouchable programming language of *computer wizards*.

To help myself along, I made this repo: a set of modules explaining C concepts. Each module is laid out as follows:

* `module/`: The folder of the module.
  * `module/module.c`: The source code of the module.
  * `module/Makefile`: The makefile for the module, if available - if this is in the module, you can just type `make` to compile.
  * `module/README.md`: The documentation for the module. Each module's README attempts to explain the concept as best as possible.

To compile and run any program, use your default C compiler (usually denoted by `cc`, and usually `gcc`), using the -o option to control the output file:

```sh
cc -o code code.c
```
