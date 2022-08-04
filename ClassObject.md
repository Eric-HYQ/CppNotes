# Class
### class
A C++ class is a user-defined type

The class serves as a blueprint for objects, which are instances of the class. An object gets characteristics and behaviors from its class.
```
//create an empty C++ class like this in a header file:
class City {
 
}; // <-- notice this semicolon!
```

Components of a class are called `class members`, you can access class members using the dot operator (`object.class_member`).

There are two types of class members:
- Attributes, also known as member data, consist of information about an instance of the class.
- Methods, also known as member functions, are functions that you can use with an instance of the class. We use a `.` before method names to distinguish them from regular functions.
```
class City {
 
  // attribute
  int population;
 
// we'll explain 'public' later
public:
  // method
  void add_resident() {
    population++;
  }
 
};
```
Declare methods inside the class (in a header), then define the methods outside the class (in a .cpp file of the same name).

Use `ClassName::` before the method name to indicate its class like this:
```
// class City
int City::get_population() {
  return population;
}

```
We need to include the header file in the .cpp file where we define the methods.

### Objects
An object is an instance of a class, which encapsulates data and functionality pertaining to that data.
`City accra;`

We can give the object’s attributes values like this
```
accra.population = 2270000;// must be defined 
```

Later, we can access this information using the method we added to the `City` class(if it’s in a public part of the class):
```
accra.get_population();
```

### Access Control
public and private

By default, everything in a class is private, meaning class members are limited to the scope of the class.
> This makes it easier to keep data from mistakenly being altered, and abstracts away all the nitty gritty details.

You can use it to make everything below accessible outside the class
```
class City {
 
  int population; 
 
public:
  void add_resident() { 
    population++;
  }
 
private: // this stuff is private
  bool is_capital;
 
};
```

### Constructors
A constructor is a special kind of method that lets you decide how the objects of a class get created.
>It has the same name as the class and no return type. 
>Constructors really shine when you want to instantiate an object with specific attributes.

```
// city.hpp
#include "city.hpp"
 
class City {
 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
 
};
 
// city.cpp
City::City(std::string new_name, int new_pop)
  // members get initialized to values passed in 
  : name(new_name), population(new_pop) {}
  
// inside main()
City ankara("Ankara", 5445000);
```

Now we have a `City` called `ankara` with the following attributes:
- ankara.name set to "Ankara".
- ankara.population set to 5445000.

### Destructors
A destructor is a special method that handles object destruction.
> Object destruction is really about tidying up and preventing memory leaks

Like a constructor, it has the same name as the class and no return type, but is preceded by a `~` operator and takes no parameters

Inside, you add any housekeeping that needs to happen before the object is destroyed
```
// city.hpp
class City {
 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
  ~City();
};
 
// city.cpp
City::~City() {
 
  // any final cleanup
 
}

```
You generally won’t need to call a destructor; the destructor will be called automatically in any of the following scenarios
- The object moves out of scope
- The object is explicitly deleted
- When the program ends
