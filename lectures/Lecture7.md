---
delivery date:
  - "[[2025-01-28]]"
  - "[[2025-01-31]]"
---
## Quick recap
- Arrays
- Multidimensional arrays
- Dynamic arrays
---
## Agenda
- Generic programming

---

Which function is more generic?

```cpp
// function 1
T max(T a, T b){
return a-b>0? a:b;
}

// function 2
T max(T a, T b){
return a>b? a:b;
}


```


---
#### Function templates

refer [lecture 5](../lectures/Lecture5)

---
#### Generic programming
> Decide which algorithms you want;
parameterize them so that they work for a variety of suitable types and data structures.

---
#### Class templates
Class templates in C++ are a way to implement generic programming. They allow you to define a class that can **work with multiple data types, by replacing the data type with a template parameter**.

---
#### Declaration of class template
```cpp
template<typename T>
class Box{
private:
	T value; 
public: 
	// constructor
	Box(T val){
		value = val;
	}
	// getter
	T getValue() {
		return value;
	} 
};
```

#### usage:
```cpp
Box<int> intBox(5);
intBox.getValue()// returns 5

Box<std::string> strBox("Hello");
strBox.getValue(); // returns "Hello"
```

---
#### Parameter types
##### Type parameters
```c++
template<typename T> // parameter is of type typename
class Box {
    T value;
public:
    Box(T val) : value(val) {}
    T getValue() { return value; }
};

// Usage:
Box<int> intBox(42);          // T is int
Box<std::string> strBox("Hi"); // T is std::string

```
---

#####  Non type parameters
These allow us to pass constant values (like integers or pointers) as parameters to a template. They can be useful for fixed-size data structures, like arrays.
```c++
template<typename T, int Size> 
class Array{
	T arr[Size]; 
	public: 
	T& operator[](int index) { 
		return arr[index]; 
		} 
}; 

// Usage: 
Array<int, 10> intArray; // Size is set to 10 
Array<double, 5> doubleArray; // Size is set to 5
```
---
#### Class instantiation
1. For class templates, only those member functions that are called are instantiated.
 
```c++
#include <iostream>
// A simple class template
template <typename T>
class Calculator {
public:
// Method that adds two numbers
T add(T a, T b) {
return a + b;
}
// Method that subtracts two numbers
T subtract(T a, T b) {
return a - b;
}
// Method that multiplies two numbers
T multiply(T a, T b) {
return a * b;
}
// Method that divides two numbers
T divide(T a, T b) {
return a / b;
}
};
```

```c++
int main() {

Calculator<int> intCalc;

// Only 'add' and 'subtract' methods are called

std::cout << "Addition: " << intCalc.add(5, 3) << std::endl;

std::cout << "Subtraction: " << intCalc.subtract(5, 3) << std::endl;

return 0;
}
```
---
#### Compiler Behavior:

- **Code Instantiation:**  When compiling, the C++ compiler analyzes which member functions are being used with the given type `int` and **generates machine code only for these functions** (`add` and `subtract` in this example).

- **Efficiency:** This selective instantiation helps reduce the binary size and improve the efficiency of the compiled program because unused methods are not included.
---
Convert `vectorInt` class to vector class template  
Refer vector_template.cpp

---

#### References
1. [Chapter 2 - C++ templates - Complete guide](https://github.com/fusying-hwang/books/blob/main/C%2B%2B%20Templates%20The%20Complete%20Guide(2nd).pdf)
2. [CppCon2021-back_to_basics_templates_part_1__bob_steagall__cppcon_2021.pdf (optional)](https://github.com/CppCon/CppCon2021/blob/main/Presentations/back_to_basics_templates_part_1__bob_steagall__cppcon_2021.pdf)