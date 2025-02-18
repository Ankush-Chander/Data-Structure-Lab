---
delivery date:
  - "[[2025-02-14]]"
  - "[[2025-02-18]]"
---
#### Quick recap
- Arrays
- Multidimensional arrays
- Dynamic arrays
---
#### Agenda
- Project retrospection
- Copy Constructor and Assignment operator
	- Deep copying vs Shallow copying
- Linked lists
- Iterators(intro)
---
### Project retrospective
- **Practical experience** > *working with smart peer* > learning by tradition(instructor/youtube/seniors)
- **Builder** > *Helper* > attentive student > Bystander/spectator
---
#### Key ideas
- Basic video rendering
- State management
- Collision detection
- Non blocking I/O
---
### What is Object Copying?

- Copying occurs when an object is assigned to another or passed by value.
- Two key mechanisms: **Copy Constructor** and **Assignment Operator**.

```c++
Vector2d v1(10,20); # default constructor
Vector2d v2(v1); # copy constructor
Vector2D v2 = v1;
```
---

### Copy Constructor
A special constructor that initializes a new object as a copy of an existing one.

```cpp
class MyClass {
public:
	MyClass(const MyClass &other); // Copy Constructor
};
// usage
Vector2D negative = get_negative(v1) // returned by value
display(v1)// passed by value
Vector2d v2(v1)// explicit copying
```
- **When is it called?**
    - When an object is passed by value.
    - When an object is returned by value.
    - When explicitly initialized using an existing object.

---

### Assignment Operator
- Used to assign an already initialized object the values of another.

```cpp
class MyClass {
    public:
        MyClass& operator=(const MyClass &other); // Assignment Operator
    };
//usage
Vector2D v2 = Vector2D(0,0)
v2 = v1;
```
    
- **When is it called?**
    - When using `=` to assign an object after initialization.

---

#### Difference Between Copy Constructor & Assignment Operator

| Feature            | Copy Constructor               | Assignment Operator              |
| ------------------ | ------------------------------ | -------------------------------- |
| Called When?       | Object is created              | Object already exists            |
| Memory Allocation? | New memory is allocated        | Uses existing memory             |
| Default Provided?  | Yes                            | Yes                              |
| Common Use Case    | Pass-by-value, return-by-value | Copying between existing objects |

---

### Shallow Copy

- **What is a Shallow Copy?**
    - Copies the pointer but **not** the actual data.
    - Both objects share the same memory.    
- **Problem:** When the copied object is destroyed, the original object’s data is also lost (double deletion issue).

---
### Deep Copy
- **What is a Deep Copy?**
    - Allocates new memory and copies actual data.
- **Example:**
- Fixes double deletion and ensures independent copies.

---
### Singly Linked list
Refer [singly_linked_list.cpp](../code/Lecture8/singly_linked_list.cpp)

---
#### References
1. [std::forward_list - cppreference.com](https://en.cppreference.com/w/cpp/container/forward_list) 
