 A `function` is a named group of code statements that accomplish something together
 
 ### Declare & define
 Declaration: this includes the function’s name, what the return type is, and any parameters (if the function will accept input values, known as arguments)
 
 Definition: also known as the body of the function, this contains the instructions for what the function is supposed to do
 ```
 // form
 return_type function_name( any, parameters, you, have ) {
 
   // Code block here
 
   return output_if_there_is_any;
 
 // eg
 void make_sandwich() {
 
  std::cout << "bread\n";
  std::cout << "egg\n";
  std::cout << "cheese\n";
  std::cout << "avocado\n";
  std::cout << "bread\n";

}
}
 ```
 
Notice that in this example, there is no return - `void` is no return funcion, also called subroutine
 
When want to return something, return type can be double, int, bool, char, std::string, and std::vector. Then here are two points:
- There must be a value returned from the function
- The return value must be the same type as the function’s return type

### Parameters & arguments
Parameters (sometimes called formal parameters) are variables used in a function’s definition.

Remember teh order when calling the functions with multiple arguments

### Scope
Scope is the region of code that can access or view a given element
- Variables defined in `global scope` are accessible throughout the program
- Variables defined in a function have `local scope` and are only accessible inside the function

### Multiple files
To make your code cleaner and more modular, you can move the function definitions over to another specialized .cpp file

Leave the declarations only before main() function, other definitions to another cpp file

More, move declarations into a `.hpp` or `.h` file (hearder file) with the same name as files containing functions, include it before `main()`
```
#include <iostream>
#include "fns.hpp" // remenber to use quotes
int main() {}
```
Compile files together

### Inline function
An inline function is a function definition, usually in a header file, qualified by inline like this:
```
inline 
void eat() {
 
  std::cout << "nom nom\n";
 
}
```

Using inline advises the compiler to insert the function’s body where the function call is, which sometimes helps with execution speed (and sometimes hinders execution speed). If you do use it, we recommend testing how it affects the execution speed of your program

### Default Arguments
Give some argumants a default value when declare, so that you don't need to put it in at most of time but still changable when necissary
```
// Declaration
void intro(std::string name, std::string lang = "C++");
 
// Definition
void intro(std::string name, std::string lang) {
  std::cout << "Hi, my name is "
            << name
            << " and I'm learning "
            << lang
            << ".\n";
}

// call
intro("Mariel")
// "Hi, my name is Mariel and I'm learning C++."

intro("Mariel", "Python")
// "Hi, my name is Mariel and I'm learning Python."
```

When a function has two default arguments, you still need to call with both arguments — if BOTH of the following are true:
- The first argument IS the default value
- The second argument is NOT the default value

### Overload
In a process known as `function overloading`, you can give multiple C++ functions the same name. Just make sure at least **one** of these conditions is true:
- Each has different type parameters
- Each has a different number of parameters

Overloading enables you to change the way a function behaves depending on what is passed in as an argument
```
// eg
void print_cat_ears(char let) {
  std::cout << " " << let << "   " << let << " " << "\n";
  std::cout << let << let << let << " " << let << let << let << "\n";
}
 
void print_cat_ears(int num) {
  std::cout << " " << num << "   " << num << " " << "\n";
  std::cout << num << num << num << " " << num << num << num << "\n";
}
```

### Function template
When two functions have different types but the same body, there is a cleaner solution you can use: templates.

A template is a C++ tool that allows programmers to add data types as parameters.

Templates are entirely created in **header files**.
```
// eg
template <typename T>
void print_cat_ears(T item) {
 
  std::cout << " " << item << "   " << item << " " << "\n";
  std::cout << item << item << item << " " << item << item << item << "\n";
 
}

```
