# Strings

Strings are different in C compared to other OOP languages; there is no strictly defined "string" type. Instead, strings are defined as *arrays of characters*. Luckily, we don't have to declare the string character-by-character: we can still use regular double-quoted string syntax like most other languages, like so:

```c
char string[] = "Hello world!";
```

Working with strings in C is, compared to other languages, pretty difficult. Strings can't be interacted with using arithmetic operators like other OOP languages - in fact, you can't even set them equal to one another. Instead, there is a special library used to interact with strings that can be imported using `string.h`.

```c
#include <string.h>
```

After that's imported, you have several ways of dealing with strings available to you - `man 3 string` has the full description. For now, though, here are some important ones.

`strcat()` is used to *concatenate* strings - adding them together.

```c
char strA[] = "as";
char strB[] = "df";
char strC[] = strcat(strA,strB) 
//strC == "asdf"
```

`strcpy()` is used to *set* strings - setting a variable equal to a string, that is.

```c
char strA[] = "as";
// spoiler alert - "char strB[] = strA;" won't work. do this instead:
strcpy(strB,strA);
```

## Side note

String functions are very insecure, and you should be very careful when using them - set a length for your strings and strictly ensure you r program won't exceed them, as this is what causes memory leaks and serious code problems.
