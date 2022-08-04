# Vector
### Creating
The `std::vector` lives in the `<vector>` header
> `#include` is a preprocessor directive that tells the compiler to include whatever library that follows.

Creating syntax 
`std::vector<type> name;`

### Initializing
- storing a latitude and a longitude
- presizing

```
// creating and initializing with a latitude and a longitude
std::vector(double> location = {43.32, 23.45};

// creating and initializing by presizing
std::vector(double> location(2)
```

### Index
An index refers to an element’s position within an ordered list

Vector is 0-indexed, meaning starting with index 0

Use `[]` to show the index

### Operating
To add a new element to the end of the vector, we can use the `.push_back()` function.

Remove elements from the end of the vector using `.pop_back()`.

### Size
`<std::vector>` stores both the elements and the size of the vector

`.size()` function returns the number of elements in the vector


