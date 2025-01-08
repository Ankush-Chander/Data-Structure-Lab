---
delivery date:
  - 2025-01-08
---
#### Quick recap
---
#### Agenda
1. Anatomy of a class
2. Inheritance
3. Data encapsulation
---
### Components of a class
- Constructor/Destructors
- Data members
- Member functions

Related code: [class_anatomy.py](../code/Lecture3/class_anatomy.py) 

---
#### Constructor
- Special function called automatically when an object is created.
- Same name as the class.
- Can be overloaded to allow different ways of initializing an object.
---

```cpp
class Vector2D {
// ...
public:
	Vector2D(float x, float y){
		this->x = x;
		this->y = y;
}
// default constructor
	Vector2D(){
		this->x = 0;
		this->y = 0;
	}
// ...
}

```

---
#### Destructor
- Called automatically when an object goes out of scope or is deleted.
- Same name as the class, preceded by `~`.
- Used for cleanup tasks.
---
```cpp
class Vector2D {
// ...
public:
	// destructor
	~Vector2D(){
	std::cout << "destructor called" << std::endl;
	}
// ...
}
```
---
#### Encapsulation
- Wrapping data and methods into a single unit (class).
- Restricting direct access to some components (using access specifiers).  
**Access specifiers**
- **public**: Accessible from anywhere.
- **private**: Accessible only within the class.
- **protected**: Accessible within the class and its derived classes.
---
```cpp
class Vector2D {
// ...
private:
	float x,y;
public:
	// member functions
	//...
}
```
---
#### Class instantiation
```cpp
// returns the reference to the object
Vector2D v2(1.0, 2.0); 

// class members access via dot operator
v2.addVectors(v1)

// using new operator
Vector2D *v3 = new Vector2D(7.0, 8.0); 
// returns the pointer to the object
```

---
#### Inheritance

- Mechanism to create a new class (subclass) from an existing class (parent class).
- Subclass inherits attributes and methods from the parent class.  
Related code: [inheritance.py](../code/Lecture3/inheritance.py) 
---
#### Access Specifiers in Inheritance
- **public**: Public and protected members of the parent remain public and protected in the child.
- **protected**: Public and protected members of the parent become protected in the child.
- **private**: All members of the parent become private in the child.
---
Programming paradigm
> Decide which classes you want;
> provide a full set of operations for each class.
> make commonality explicit by using inheritance.
---
### How to write better classes?

---
#### Builtin datatypes vs User defined types

| Built in datatypes                                                 | User defined datatypes                                                                            |
| ------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------- |
| Eg: `int`, `float`, `double`, `char`, `bool`, etc.                 | Eg: `struct`, `class`, `union`, `enum`, and `typedef`.                                            |
| **Usage**: Built-in datatypes are used to store simple data values | **Usage**: Used when a program needs to model more complex entities with attributes and behaviors |

---
#### Operator overloading
**Operator overloading** in C++ is a feature that allows you to define or *redefine the behavior of operators* (such as `+`, `-`, `*`, `=`, etc.) for user-defined types (such as classes or structures).   
It enables the use of these operators in a way that is *natural and intuitive* for the objects of the custom types.

---
```c++
class Vector2D {
private:
	float x, y;
public:
	Vector2D operator+(Vector2D& v){
		return Vector2D(x + v.x, y + v.y);
	}
}
// usage: Vector2D v3 = v1+v2;
```
instead of 
```c++
// instead of 
Vector2D addVectors(Vector2D v) const {
	return Vector2D(this->x + v.x, this->y + v.y);
}
// usage: Vector2D v3 = v1.addVectors(v2);
```
---
#### The Three Basic Rules of Operator Overloading
1. _**Whenever the meaning of an operator is not obviously clear and undisputed, it should not be overloaded.**_ _Instead, provide a function with a well-chosen name._  
    Basically, the first and foremost rule for overloading operators, at its very heart, says: _Don’t do it_.
2. _**Always stick to the operator’s well-known semantics.**_  
3. _**Always provide all out of a set of related operations.**_  
    _Operators are related to each other_ and to other operations. If your type supports `a + b`, users will expect to be able to call `a += b`, too. 
---
#### Friend functions
A **friend function** in C++ is a function that is **not a member** of a class but has access to the class's **private and protected members**. 

**Why friend functions?**  
- allow external functions to work closely with the internals of a class, often for purposes like operator overloading, accessing private data for computations, or implementing related utility functions.

---
```c++
class Vector2D {
//...
public:
	friend Vector2D operator*(int scalar, Vector2D& vec) {
		return vec * scalar;
}
//...
}
// makes the expression 2 * v1 possible
```
---
#### References
1. [Chapter 16: The C++ Programming Language [4th Edition] - Bjarne Stroustrup](https://github.com/unixzilla/materials/blob/master/The%20C%2B%2B%20Programming%20Language%20%5B4th%20Edition%5D%20-%20Bjarne%20Stroustrup.pdf)