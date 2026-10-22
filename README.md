# Calculator App - C++ Learning Project

A simple calculator application built with C++ to learn the language step by step.

---

## Version History

---

### V1 - Basic Calculator (No Conditions, No Loops)

**Features:**
- User enters two numbers
- Program prints all 4 operations at once (+, -, *, /)
- Program runs once and exits

**Known Issues:**
| # | Issue | Description | Fixed In |
|---|-------|-------------|----------|
| 1 | Division by zero | Entering `0` as the second number shows `inf` instead of an error | V2 |
| 2 | No operation choice | User can't choose which operation — all 4 are printed | V2 |
| 3 | No repeat | Program exits after one use — no way to do another calculation | V2 |

**Concepts Used:**
- Variables (`int`, `float`)
- Input/Output (`cin`, `cout`)
- Basic arithmetic operators (`+`, `-`, `*`, `/`)

---

### V2 - Interactive Calculator (Conditions + Loops)

**What's New:**
- ✅ Menu to choose a specific operation
- ✅ Division by zero error handling
- ✅ `while` loop — calculator keeps running until user exits
- ✅ AC (All Clear) — clears the screen
- ✅ Exit option to quit the program
- ✅ Invalid menu choice handling (`default` in switch)

**Issues Fixed from V1:**
| # | Issue | Fix Applied |
|---|-------|-------------|
| 1 | Division by zero shows `inf` | Added `if (b == 0)` check before dividing |
| 2 | No operation choice | Added menu with `switch` statement |
| 3 | No repeat | Wrapped everything in a `while` loop |

**Known Issues:**
| # | Issue | Description | Fixed In |
|---|-------|-------------|----------|
| 1 | Letter input crashes | Typing a letter instead of a number causes infinite loop or exit | V3 |
| 2 | No ANS memory | Can't reuse the last result in a new calculation | V3 |
| 3 | Goodbye not visible | Program closes instantly — no time to read "Goodbye!" | V3 |
| 4 | Only 2 numbers | Each operation is limited to exactly 2 numbers | V3 |

**Concepts Used:**
- Everything from V1
- `while` loop — repeats code until a condition is false
- `switch` / `case` — picks one path based on a value
- `if` / `else` — makes decisions
- `bool` — true/false variable to control the loop
- `system("cls")` — clears the console screen (Windows)
- `break` — exits a switch case or loop

---

### V3 - Chain Calculator with ANS Memory ✅ Current

**What's New:**
- ✅ **Chain operations** — do multiple operations in a row (e.g. `5 + 3 * 2 - 1 =`)
- ✅ **ANS memory** — last result is saved, choose option 2 to continue from it
- ✅ **Input validation** — typing a letter no longer crashes the program
- ✅ **Goodbye message** — program waits for Enter before closing
- ✅ **AC resets ANS** — All Clear now also resets the stored answer

**Issues Fixed from V2:**
| # | Issue | Fix Applied |
|---|-------|-------------|
| 1 | Letter input crashes | Added `cin.fail()` + `cin.clear()` + `cin.ignore()` to catch bad input |
| 2 | No ANS memory | Added `ans` variable that saves the last result |
| 3 | Goodbye not visible | Added `cin.get()` pause so user can read the message before window closes |
| 4 | Only 2 numbers | Added inner `while(true)` loop — keep entering operator + number until `=` |

**Known Limitations:**
| # | Limitation | Description | Planned Fix |
|---|-----------|-------------|-------------|
| 1 | No operator precedence | `5 + 3 * 2` gives `16` not `11` — it calculates left to right like a basic calculator | Future |
| 2 | No parentheses | Can't group operations like `(5 + 3) * 2` | Future |

**New Concepts Used:**
- Everything from V2
- `cin.fail()` — checks if the last input operation failed
- `cin.clear()` — resets the error state so `cin` works again
- `cin.ignore(1000, '\n')` — throws away the invalid input from the buffer
- `continue` — skips the rest of the current loop iteration and jumps back to the top
- `while(true)` + `break` — an inner loop that runs until we manually break out
- **Nested loops** — a loop inside a loop (chain loop inside main menu loop)

---

## How to Compile and Run

```bash
g++ Calculator.cpp -o Calculator.exe
Calculator.exe
```

---

## Example Usage (V3)

```
============================
     Calculator V3
============================
1. New Calculation
3. AC (All Clear)
0. Exit
============================
Choose: 1
Enter first number: 10
Enter operator (+, -, *, /) or = to get result: +
Enter next number: 5
= 15
Enter operator (+, -, *, /) or = to get result: *
Enter next number: 2
= 30
Enter operator (+, -, *, /) or = to get result: =
>>> Result: 30 <<<

============================
     Calculator V3
============================
1. New Calculation
2. Continue from ANS (30)
3. AC (All Clear)
0. Exit
============================
Choose: 2
Starting from ANS = 30
Enter operator (+, -, *, /) or = to get result: -
Enter next number: 10
= 20
Enter operator (+, -, *, /) or = to get result: =
>>> Result: 20 <<<
```

---
