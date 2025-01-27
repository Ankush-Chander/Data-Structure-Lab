---
delivery date:
  - "[[2025-01-28]]"
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
int max(int a, int b){
return a-b>0? a:b;
}

// function 2
int max(int a, int b){
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
Refer vector_template.cpp
