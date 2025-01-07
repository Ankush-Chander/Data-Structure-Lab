---
delivery date:
  - "[[2025-01-02]]"
---

#### Agenda
- Why study data structures?
- Game plan
- Compilation process(revision)

---
#### Todos: 
- [ ] Join [classroom](https://classroom.google.com/u/1/c/NzIyNTQ2OTM4OTM2) (code: eskvmjp)
- [ ] Fill introductory survey
---
#### Why data structures?
- **Efficient Problem-Solving:** Choice of data structures makes certain operations more efficient while others difficult(trade offs).
- **Optimizing Resources:** Using the right data structure can significantly reduce the time and space complexity of a program.
- **Foundations for Algorithms:** Choice of data structures allows or limits the algorithms that can be applied on a problem.  
[1](https://kidsmoralstories.blogspot.com/2017/10/the-fox-and-crane-short-story.html)
---
#### Where are we?
![img](https://img.freepik.com/premium-photo/travel-concept-map-needle-with-marked-place-compass-point-map-routes_494741-63057.jpg?w=1060)


---
#### So far: IT112: Introduction to programming
- Primitive data types (int, char, float etc.)
- Control Structures(for-loop, while-loop, if-else etc.),
- Structured Programming(functions, switch, if-else),
-  Arrays, Strings, and Pointers
- Dynamic memory allocation and de-allocation efficiently.

---
#### Where we want to go

- Apply C++ and Object Oriented Programming(OOPs) constructs to implement Data Structures


---
#### Game plan

- Revise important concepts common to C/C++
- Understand OOPs concepts
	- Classes and Objects
	- Encapsulation
	- Polymorphism
	- Operator Overloading
- Understand C++ concepts crucial for Data structures implementation
	- Templates
	- Iterators
	- Containers
- Follow IT205
---
#### Compilation process

Programs are translated by other programs into different forms:
```cpp
// main.cpp
// locate header file using: find /usr/include -name iostream -type f -print

#include <iostream>
int main()
{
    std::cout << "hello world"<< std::endl;
    return 1;
}
```
---

1. **Preprocessing phase:** In this phase, the preprocessor is responsible for handling directives such as #include, #define, and #ifdef. It processes these directives and modifies the source code accordingly. It also removes comments and whitespace, and incorporates header files into the source code.
```cpp
g++ -E main.cpp -o main.i
```
---

2. **Compilation phase:**   
**preprocessed source code=> assembly language.**    
The compiler parses the code, checks it for errors, and translates it into a low-level intermediate representation. This phase also involves optimizations to improve the efficiency of the generated code.
```cpp
# Compilation
g++ -S main.i -o main.s
```
---
3. **Assembly phase:**  
the assembly code => machine code ([[Object code]]) The assembler converts the symbolic instructions and addresses into binary code that can be understood by the computer's processor.
```cpp
g++ -c main.s -o main.o
```
---

4. **Linking phase:** In this final phase, the linker links all the Object code files generated in the compilation phase and resolves external references. It combines the object code files with any necessary system libraries and generates the final executable file. The linker also performs any necessary relocations and generates a symbol table for the program.

```cpp
# linking steo
g++ main.o -o main
```
---


#### Compilation steps
```bash

# **Preprocessing:**
g++ -E main.cpp -o main.i

# Compilation
g++ -S main.i -o main.s

# Assembly
g++ -c main.s -o main.o

#Linking 
g++ main.o -o main

# Combined
g++ main.cpp -o main
```

---

#### Entry point 
The entry point of a C++ program is the function where execution starts. This is typically the `main function`. The main function has a special significance and specific rules regarding its declaration, return type, and parameters.

---

**Parameters**  
- *argc (Argument Count):* An integer representing the number of command-line arguments passed to the program, including the program's name.  

- *argv (Argument Vector):* An array of C-strings (char*) representing the actual arguments. argv[0] is the name of the program, and argv[1] through argv[argc-1] are the additional arguments.

---
**Return Type**  
- The return type of main is int, which allows the program to return a status code to the operating system.  
- By convention:  
return 0; indicates successful execution.  
Non-zero values indicate errors or abnormal termination.

---

#### References
1. CSAPP - Chapter 1