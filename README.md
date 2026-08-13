# BYTE CODE INTERPRETER

A custom programming language and interpreter built from scratch using **C/C++**.

The project defines its own programming syntax (`.asmn`), language rules, runtime operations, mathematical functions, string operations, file handling, graphics, and database-style operations.

The goal of the project is to experiment with how programming languages and interpreters work by building the execution system from the ground up.

---

## 🚀 Features

### Core Language

* Variables and assignment
* Integer and floating-point values
* String handling
* Conditional statements
* Loops
* Break statements
* Functions
* Function calls
* Return values
* Local and global scope
* Recursion
* Basic expression evaluation
* Control-flow operations

### Mathematical Operations

The language provides built-in mathematical functionality including:

* Addition and subtraction
* Multiplication and division
* Power
* Square root
* Factorial
* Absolute value
* Trigonometric functions
* Logarithmic functions
* Mean
* Minimum / maximum
* Prime-number operations
* Other mathematical utilities

### String Operations

The interpreter provides operations for:

* String concatenation
* String length
* Copying
* Searching
* Reversing
* Character/string manipulation
* Encoding/encryption experiments

### File and System Operations

The runtime supports operations such as:

* Creating and writing files
* Appending to files
* Reading/displaying files
* File size operations
* File deletion
* Starting external programs
* Sleep/timing operations
* Other system-level operations

### Graphics & Visualization

The language also contains graphical functionality using **Raylib**, allowing programs to generate visual output such as:

* Graphs
* Bar charts
* Histograms
* Character-based visualizations
* Other graphical representations

### Database / Query Experiments

The project also contains an experimental query subsystem with operations for:

* Creating keys
* Adding data
* Finding data
* Modifying data
* Removing data
* Displaying data
* Statistics
* Opening data files

---

## 🧠 Language

Programs are written using the custom `.asmn` syntax.

Example:

```text
VAR A 10
VAR B 20

p ^A
p ^B
```

The language also supports constructs for functions, loops, conditions, recursion and return values.

Example function structure:

```text
fun{
    ...
}

call ...
```

See [`rules.txt`](rules.txt) for the complete language specification.

---

## 🏗️ Project Architecture

The project currently consists of a main interpreter and a separate runtime/helper component.

```text
              .asmn Program
                    │
                    ▼
              ┌───────────┐
              │   n.c     │
              │ Interpreter│
              └─────┬─────┘
                    │
          ┌─────────┴─────────┐
          │                   │
     Language Logic       Runtime Operations
          │                   │
          │                   ▼
          │              origin.cpp
          │                   │
          │          ┌────────┼─────────┐
          │          │        │         │
          │         Math     Files    System
          │          │        │         │
          └──────────┴────────┴─────────┘
                    │
                    ▼
                  Output
```

`n.c` contains the main language/interpreter logic, while `origin.cpp` provides additional runtime functionality.

---

## 📁 Repository Structure

```text
BYTE_CODE_INTERPRETER/
│
├── src/
│   ├── n.c
│   └── origin.cpp
│
├── examples/
│   ├── n.asmn
│   ├── x.asmn
│   ├── sine_wave.asmn
│   ├── cos_wave.asmn
│   └── tan_wave.asmn
│
├── tests/
│   └── trialsere.txt
│
├── rules.txt
└── README.md
```

### `src/`

Contains the source code of the interpreter and runtime.

### `examples/`

Contains example programs written in the `.asmn` language.

### `tests/`

Contains experimental programs used to test language features such as recursion, scope, functions, loops, strings, graphics and file operations.

### `rules.txt`

Contains the language specification and available commands.

---

## 🧪 Tested Language Features

The project has been tested with programs covering:

* Variable handling
* Local/global scope
* Functions
* Recursive functions
* Return values
* Loops
* Conditional statements
* String operations
* Mathematical operations
* File operations
* Graphics
* Data/query operations
* Runtime operations

Example programs are available in the `examples/` directory.

---

## 🛠️ Technologies Used

* **C**
* **C++**
* **Raylib**
* File I/O
* Custom interpreter/runtime architecture
* Custom `.asmn` language

---

## 🎯 Project Goals

This project was created to explore:

* How programming languages are designed
* How interpreters process source code
* Expression evaluation
* Variable and scope management
* Function execution and recursion
* Runtime design
* File and system interaction
* Graphics integration
* Designing a custom language from scratch

---

## 📌 Current Status

The interpreter is an ongoing experimental project.

The language specification and implementation are continuously being expanded and refined.

Future improvements include:

* Better error handling
* Improved documentation
* More structured testing
* Cleaner source organization
* Improved parsing
* Further development of the intermediate representation/runtime
* Performance improvements

---

## 📚 Documentation

For the complete list of supported language constructs and commands:

**[Language Rules →](rules.txt)**

---

## 👨‍💻 Author

**Aravind**

Built as a personal systems/programming-language project to explore interpreters, C/C++ programming and language design.
