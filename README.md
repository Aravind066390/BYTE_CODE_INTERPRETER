# BYTE CODE INTERPRETER

A custom programming language and interpreter developed from scratch using **C and C++**.

The project uses a custom `.asmn` language and provides its own syntax, execution logic, runtime operations, mathematical functions, string operations, file handling, graphics, and experimental data/query operations.

The project was developed as an exploration of **interpreters, programming-language design, C/C++ programming, runtime execution, and low-level program control**.

---

## ✨ Features

### Core Language

The custom `.asmn` language supports:

* Variables
* Integer and floating-point values
* Assignment
* Printing and input
* Conditional statements
* Loops
* Break operations
* Functions
* Function calls
* Return values
* Local and global scope
* Recursion
* Control-flow operations
* Expression evaluation

### Mathematical Operations

The interpreter provides several mathematical operations, including:

* Arithmetic
* Power
* Square root
* Factorial
* Absolute value
* Trigonometric functions
* Logarithmic functions
* Mean
* Minimum and maximum
* Prime-number operations
* Other mathematical utilities

### String Operations

String functionality includes:

* String concatenation
* String length
* Copying
* Reversing
* Searching
* Character manipulation
* Encoding/encryption experiments

### File & System Operations

The runtime supports operations for:

* Creating files
* Writing files
* Appending to files
* Reading/displaying files
* File size operations
* File deletion
* Starting external programs
* Sleep/timing operations
* Other system-level operations

### Graphics & Visualization

The interpreter integrates **Raylib** to provide graphical functionality.

The language can be used for operations such as:

* Graphs
* Bar charts
* Histograms
* Character-based visualizations
* Other graphical representations

### Experimental Database / Query Operations

The project also contains an experimental query/data subsystem with operations for:

* Creating keys
* Adding data
* Finding data
* Modifying data
* Removing data
* Displaying data
* Statistics
* Opening data files

---

## 🧠 Custom `.asmn` Language

Programs are written using the project's custom `.asmn` syntax.

A simple example:

```text
VAR A 10
VAR B 20

p ^A
p ^B
```

The language also supports functions, loops, conditions and recursion.

Example function concept:

```text
fun{
    ...
}

call ...
```

The complete language specification is available in [`rules.txt`](rules.txt).

---

## ⚙️ How It Works

The project is divided conceptually into two major parts:

```text
             .asmn Program
                   │
                   ▼
              ┌───────────┐
              │    n.c    │
              │ Interpreter│
              └─────┬─────┘
                    │
                    │ Runtime operations
                    ▼
              ┌────────────┐
              │ origin.cpp │
              │   Runtime  │
              └─────┬──────┘
                    │
          ┌─────────┼─────────┐
          ▼         ▼         ▼
        Math      Files     System
          │         │         │
          └─────────┼─────────┘
                    ▼
                  Output
```

### `n.c`

Contains the main interpreter implementation responsible for reading and executing `.asmn` programs and handling language features such as:

* Variables
* Conditions
* Loops
* Functions
* Recursion
* Strings
* Expressions
* Graphics
* Language control flow

### `origin.cpp`

Provides additional runtime functionality used by the interpreter, including mathematical, file, system and other operations.

---

## 📂 Current Repository Files

The repository currently contains the following main components:

| File             | Purpose                                   |
| ---------------- | ----------------------------------------- |
| `n.c`            | Main interpreter implementation           |
| `origin.cpp`     | Runtime/helper implementation             |
| `rules.txt`      | Language rules and command specification  |
| `trialsere.txt`  | Collection of experimental/trial programs |
| `n.asmn`         | Example `.asmn` program                   |
| `x.asmn`         | Example `.asmn` program                   |
| `sine_wave.asmn` | Sine-wave related example                 |
| `cos_wave.asmn`  | Cosine-wave related example               |
| `tan_wave.asmn`  | Tangent-wave related example              |
| `n.exe`          | Compiled executable                       |
| `origin.exe`     | Compiled runtime executable               |
| `newer.exe`      | Compiled executable                       |
| `syst.exe`       | Compiled executable                       |
| `newer.html`     | Generated/output file                     |
| `n.txt`          | Output/test data                          |

---

## 🧪 Testing

The project has been tested using several experimental programs.

`trialsere.txt` contains tests for features including:

* Variable scope
* Local and global variables
* Functions
* Recursive functions
* Return values
* Loops
* Conditional statements
* String operations
* File operations
* Graphics
* Mathematical operations
* Data/query operations

These experiments were used during the development of the language to verify different interpreter features.

---

## 🛠️ Technologies

* **C**
* **C++**
* **Raylib**
* File I/O
* Custom `.asmn` language
* Custom interpreter/runtime

---

## 🎯 Project Goals

The main goals of this project are to explore:

* Programming language design
* Interpreter implementation
* Expression evaluation
* Variable and scope management
* Function execution
* Recursion
* Runtime design
* File and system interaction
* Graphics integration
* Building a programming language from scratch

---

## 📖 Language Documentation

The complete list of language commands and syntax is documented in:

**[`rules.txt`](rules.txt)**

The trial programs and experiments are documented in:

**[`trialsere.txt`](trialsere.txt)**

---

## 🚧 Current Status

This is an ongoing programming-language project.

The interpreter currently contains a large collection of language features and experimental runtime functionality. Future development will focus on improving:

* Error handling
* Stability
* Documentation
* Testing
* Code organization
* Performance
* Language parsing
* Runtime execution

---

## 👨‍💻 Author

**Aravind**

A personal project exploring **C/C++ programming, interpreters, programming-language design, runtime systems, and low-level software development.**
