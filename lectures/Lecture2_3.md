---
delivery date:
  - "[[2025-01-07]]"
---

#### Quick recap
- Compilation Process
---
#### Agenda
- Layered Architecture
- Programming paradigms
	- Procedural vs Modular vs OOP


---
### Layered architecture
![](https://github.com/Ankush-Chander/Data-Structure-Lab/raw/lecture2/images/layered_architecture.png)
---
### Themes of this course

|     | Themes                                          | Topics                      |
| --- | ----------------------------------------------- | --------------------------- |
|     | **Programming Environment**                     | Compilation process         |
|     | **Programming Languages/ Programming concepts** | Programming paradigms, OOPs |
|     | **Specific programming language C/C++**         | syntax, features            |

---
#### Programming Paradigms
- Procedural programming
- Modular programming
- Object Oriented Programming
- Generic Programming
---
![](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fwww.alpharithms.com%2Fwp-content%2Fuploads%2F557%2Fvector-matrix-addition-illustration.jpg&f=1&nofb=1&ipt=d9c737c2c7a1061b36c52929cde5f9fa9c2832e849ceabaa6a4a8f27559c3b95&ipo=images)

---
#### Procedural Programming

> Decide which procedures you want;
> Use the best algorithms you can find.

- Language supports this paradigm by providing facilities for passing arguments to functions and returning values from functions.  

Refer code: [[vector2d_struct.c]]


---
#### Scope of improvement(1)
 1. [**namespace pollution**](https://cpp-primer.pages.dev/book/172-18.2._namespaces.html#filepos4928745) Occurs when all the names of classes and functions are placed in the global namespace. Large programs that use code written by multiple independent parties often encounter collisions among names if these names are global.
 2. Separation of concern: User code is not separated from 

---
#### Modular programming

> Decide which modules you want;
> partition program so that data is hidden within modules.

Refer [modular code](../code/Lecture2/modular)

---
#### Namespaces
**[Namespaces](https://cpp-primer.pages.dev/book/175-defined_terms.html#filepos5111084)** provide a much more controlled mechanism for preventing name collisions. Namespaces partition the global namespace. A namespace is a scope. By defining a library’s names inside a namespace, library authors (and users) can avoid the limitations inherent in global names.


---
![](https://github.com/Ankush-Chander/Data-Structure-Lab/raw/lecture2/images/modular_diagram.jpeg)

---
#### Multi-file compilation
C++ like C supports C"s notion of separate compilation. This can be used to organise a program into a set of semi-independent fragments.

---
#### How does multi compilation works?
1. **Preprocessor** processes each source file and act upon preprocessor directives(hash directives). (test.cpp => test.i)
2. **Compiler** takes in the resultant source file and compile it to assembly code. (test.i => test.s)
3. **Assembler** takes in the assembly file and convert it into a relocatable object code. (test.s => test.o)
4. **Linker** takes multiple object files and generate a single executable file (test.o => test.out)

---
![](https://github.com/Ankush-Chander/IT603-notes/raw/main/lectures/images/linker.png)
Linker positioned in compilation process.  
Pic credits: CSAPP

---
```bash
# preprocessing
g++ -E main.cpp -o main.i
g++ -E vector2D.cpp -o vector2D.i
## compilation
g++ -S main.i -o main.s
g++ -S vector2D.i -o vector2D.s
# Assembly
g++ -c main.s -o main.o
g++ -c vector2D.s -o vector2D.o
#Linking 
g++ main.o vector2D.o -o vector_program

# or in one step
g++ main.cpp vector2D.cpp -o vector_program 
```
---
#### Scope of improvement(2)
1. Information organisation
2. Code reuse
---
#### Object Oriented Programming
Refer [oop code](../code/Lecture2/oop)

---
#### Information organization
![](https://www.scaler.com/topics/images/difference-between-structure-and-class_Thumbnail.webp)
---
#### Code reuse

---
#### References
1. [Chapter 3: C++ Programming Language - Bjarne Stroustrup]()
