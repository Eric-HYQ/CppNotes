# Reference & pointer
A computer’s memory is a sequence of bytes, We can number the bytes from 0 to the last one. Each number, known as an address, represents a location in the memory.

Everything we put into memory has an address.

These two are powerful tools in C++

### Reference
A reference variable is an alias for something else, that is, another name for an already existing variable.

Suppose we have an int variable already called `songqiao`, we can create an alias to it by using the `&` sign in the declaration:
```
int &sonny = songqiao;
```
So here, we made `sonny` a reference to `songqiao`, when change `sonny`, `songqiao` also changes.

- Anything we do to the reference also happens to the original.
- Aliases cannot be changed to alias something else.

### pass-by-reference
*Pass-by-value*: when we passed parameters to a function, we used normal variables and that’s known as pass-by-value
> the variables passed into the function are out of scope, we can’t actually modify the value of the arguments.

*Pass-by-reference* refers to passing parameters to a function by using references
> When called, the function can modify the value of the arguments by using the reference passed in.

This allows us to:
- Modify the value of the function arguments
- Avoid making copies of a variable/object for performance reasons

```
void swap_num(int &i, int &j) {
 
  int temp = i;
  i = j;
  j = temp;
 
}
 
int main() {
 
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
 
  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";
 
}
// A is 200
// B is 100
```
> Note, we print `a` and `b` here and get swapped results
> if don't use `&`, the answer should still be A = 100 B = 200

Qoestion:
```
#include <iostream>

int triple(int &i) {

  i = i * 3;
  
  return i;

}

int main() {
  
  int num = 1;
  int c = triple(num);
  std::cout << triple(num) << "\n";
  std::cout << triple(c) << "\n";
  //std::cout << triple(num) << "\n";

}
```
> Use `int i`, no decaration of `c`, outpout 3, 3
> 
> Use `int &i`, no decaration of `c`, outpout 3, 9
> 
> Use `int i`, decaration of `c`, outpout 3, 9
> 
> Use `int &i`, no decaration of `c`, outpout 9, 9
> 
> The last one is strange

`const` keywords tells the compiler that we won’t change something, if try to change, compiler will throw an error
```
double const pi = 3.14;
```

 `const` reference will ensure that the parameter won’t be changed in the scope. 
 However, by making `i` a reference to the argument, this **saves the computational cost** of making a copy of the argument.

### Memory address
`&` has another meaning, the “address of” operator, used to get the memory address, the location in the memory, of an object.
```
int porcupine_count = 3;
std::cout << &porcupine_count << "\n";
// 0x7ffd7caa5b54
```
> This output is a memory address represented in hexadecimal

- When `&` is used in a declaration, it is a reference operator
- When `&` is not used in a declaration, it is an address operator

### Pointer
A pointer variable is mostly the same as other variables, which can store a piece of data, a pointer stores a memory address instead of value.

Pointers are syntactically distinguished by the `*`, so that `int*` means "pointer to int"
```
// eg
int* ptr = &gum;
```
> `int*` makes it a pointer rather than a normal variable.
> `ptr` is the pointer name.
> `&gum` is the memory address of the other variable gum.

### Dereference
The asterisk sign `*` a.k.a. the dereference operator is used to obtain the value pointed to by a variable.
```
int blah = *ptr;
```

- When `*` is used in a declaration, it is creating a pointer.
- When `*` is not used in a declaration, it is a dereference operato

### Null pointer
Only declare without initialzing like `int* ptr;` points to an unvalid location, dangerous

Use nullptr as null pointer initialization from C++11
```
int* ptr = nullptr;
```
> in older situation, `NULL` is used to do this work


