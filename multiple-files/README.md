# Working with Multiple Files

Code can get messy. At some point it's good to compartmentalize sections of your code to rectify this, by placing them in separate files and "including" them into the main function. As is tradition, C is a little quirky.

## Header Files

If you want to include a function from another C file, you should define a *header file* (file extension `.h`) that defines the functions that should be added from the other file.

Then, to include them, use quotes instead of angle brackets when using `#include`:

```c
#include "header.h";
```

(A note: C allows for the inclusion of other files by simply including them as they are, but this is bad practice - always use header files!)
