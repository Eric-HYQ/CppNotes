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

### 
