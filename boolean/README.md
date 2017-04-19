# Boolean Variables

Boolean variables are either true or false, making them very useful for programming. In other languages, this is imported automatically for standard libraries. For C, these aren't included automatically - you need to include `stdbool.h`:

```c
#include <stdbool.h>
```

Once this is imported, working with booleans works about the same way it would in any language, using the `bool` type:

```c
bool a = true;
bool b = false;
a != b //true
```

## Side note

Boolean variables are essentially ints with value of either 0 or 1, so this isn't a *neccesary* addition. However, it might be more comfortable with those working with other OOP languages who are used to booleans, so it's worth mentioning, and it might save on memory.
