# Arguments

Arguments (aka "args") are defined by two variables taken as parameters of the `main()` function:

* `int argc` is the first argument - the number of arguments given (stands for 'argument count').
* `char *argv` is the second argument - the arguments themelves (stands for 'argument vector').

Setting up the `main()` function to do this is as follows:

```
int main(int argc, char **argv){
  // code goes here
}
```

Actual code arguments start on `argv[1]`; `argv[0]` is the program itself.
