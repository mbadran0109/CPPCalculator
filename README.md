# Calculator App - C++ Learning Project

A simple calculator application built with C++ to learn the language step by step.

---

## Version History

### V1 - Basic Calculator (No Conditions, No Loops)

**Features:**
- User enters two numbers
- Program prints all 4 operations at once (+, -, *, /)
- Program runs once and exits

**Known Issues:**
| # | Issue | Description |
|---|-------|-------------|
| 1 | Division by zero | Entering `0` as the second number shows `inf` instead of an error message |
| 2 | No operation choice | User can't choose which operation to perform — all 4 are printed |
| 3 | No repeat | Program exits after one use — no way to do another calculation |

**Concepts Used:**
- Variables (`int`, `float`)
- Input/Output (`cin`, `cout`)
- Basic arithmetic operators (`+`, `-`, `*`, `/`)

---

### V2 - Interactive Calculator (Conditions + Loops) ✅ Current

**What's New:**
- ✅ Menu to choose a specific operation
- ✅ Division by zero error handling
- ✅ `while` loop — calculator keeps running until user exits
- ✅ AC (All Clear) — clears the screen and starts fresh
- ✅ Exit option to quit the program
- ✅ Invalid input handling (wrong menu choice)

**Issues Fixed from V1:**
| # | Issue | Fix Applied |
|---|-------|-------------|
| 1 | Division by zero shows `inf` | Added `if (b == 0)` check before dividing |
| 2 | No operation choice | Added menu with `switch` statement |
| 3 | No repeat | Wrapped everything in a `while` loop |

**Concepts Used:**
- Everything from V1
- `while` loop — repeats code until a condition is false
- `switch` / `case` — picks one path based on a value
- `if` / `else` — makes decisions (used for divide-by-zero check)
- `bool` — true/false variable to control the loop
- `system("cls")` — clears the console screen (Windows)
- `break` — exits a `switch` case or loop
- `default` — handles unexpected input in `switch`

---

## How to Compile and Run

```bash
g++ Calculator.cpp -o Calculator.exe
Calculator.exe
```

---

## Upcoming Versions

- **V3** — OOP: Refactor into a `Calculator` class
- **V4** — Advanced features (memory, history, more operations)

