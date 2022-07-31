# Loop
### While loop
Form
```
while (condition) {
  statement
]
```
Continue to execute `statement` over and over again as long as the `condition` is `true`.

### For loop
Form
```
for (int i = 0; i < 20; i++) {
  statement
}
```
- `int i = 0` initialization of *counter*
- `i < 20` continue condition
- `i++` change in the counter

### Error
#### Compile-time error
First line of defense against errors.

Two type of compile-time error:
- syntax errors, errors that occur when we violate the rules of C++ syntax
- Type error, errors that occur when there are mismatch between the types that we declared

> Some common syntax errors:
> - Missing semicolon`;` 
> - Missing close parenthesis`)`, square bracket`]`, or curly brace`}`
> 
> Some common type errors:
> - Forget to declare a variable
> - Storing the value into a wrong type

#### Link-time error
1. Sometimes the program needs some function or library that it cannot find.
2. For large program, it's good to divide it into separate files. After compiling them, the *linker* would combine them into a single executable file. That's when link-time errors are found

> Some common link-time errors:
> - Use a function that was never difined
> - Write `Main()` instead of `main()`

#### Run-time error
Happen during execution after successful compilation, usually asks computers to do something they cannot reliably do. After running `./a.out` command

> Some common run-time errors:
> - `division error`, division by zero, errors that hard to find as compiler doesn't point to the line
> - Try to open a file that doesn't exist

#### Logic error
Program doesn't do what we want it to do, most common ones

