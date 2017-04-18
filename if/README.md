# If, Else-if & Else

Conditional statements are arguably the most important building block of logic in code. These manifest primarily in if, else-if, and else statements throughout code. These test expressions or have certain conditions that let them know when to run the blocks of code inside of them.

## If Statement

The most basic conditional statement is the `if` statement, which looks roughly like this:

```c
if( expression ) {
  // code if expression is true
}
```

If statements are powerful and have a number of operators that can be used. Here are a few:

* `if (a == b)`: Is `a` equal to `b`?
* `if (a != b)`: Is `a` NOT equal to `b`?
* `if (a > b)`: Is `a` greater than `b`?
* `if (a < b)`: Is `a` less than `b`?
* `if (a >= b)`: Is `a` greater than or equal to `b`?
* `if (a <= b)`: Is `a` less than or equal to `b`?

There are also a few special, non-arithmetic operators:

* `if (a==b && b>c)`: Is `a` equal to b *AND* `b` greater than `c`?
* `if (a==b || b>c)`: Is `a` equal to b *OR* `b` greater than `c`?

## Else-if

If statements can be immediately followed up with else-if and else statements.

Else-if is like an if statement, but it *only* runs if the statement before it failed. It looks like this:

```c
if( false_expression ){
  // this expression fails
}
else if ( expression ) {
  // this code runs if "expression" is true
}
```

It's important to note that else-if statements can run directly after other else-if statements, letting you chain conditional operators together pretty easily:

```c
if ( false_expression ) {
  // this expression fails
}
else if ( another_false_expression ) {
  // this one fails too
}
else if ( expression ) {
  // this code runs if "expression" is true
}
...
```

## Else

Else statements are like else-if statements, but they don't take an expression - when the if or else-if statement before it fails, it runs automatically, like so:

```c
if ( false_expression ) {
  // this expression fails
}
else if ( another_false_expression ) {
  // this one fails too
}
else {
  // this code runs
}
...
```
