<!-- SABAREESH COPYRIGHT NOTICE START -->

> **Copyright © 2026 Sabareesh M (@saba1207B). All Rights Reserved.**
>
> Original work in this repository is protected by copyright.
> No public license is granted for that original work.
> Unauthorized copying, modification, redistribution, commercial use,
> or AI/ML training use is prohibited without prior written permission.
>
> See [COPYRIGHT](COPYRIGHT) and [LICENSE](LICENSE).
>
> **Third-party materials remain subject to their respective licenses.**

<!-- SABAREESH COPYRIGHT NOTICE END -->

> ⚠️ **STRICT COPYRIGHT NOTICE — ALL RIGHTS RESERVED**  
> Copyright © 2026 Sabareesh M (`saba1207B`)  
>  
> **This repository is NOT open source.**  
> Unauthorized copying, redistribution, modification, or use of any code, text, or materials from this repository is **strictly prohibited**.  
>  
> **Especially forbidden:**  
> - Copying or adapting any program for submission as your own work  
> - Sharing or redistributing the code  
> - Using any content for AI / machine learning training or generation  
>  
> This repository is public **only** so that authorized mentors can review progress.  
> Full legal terms: [`LICENSE`](LICENSE) | [`COPYRIGHT`](COPYRIGHT) | [`AI_INSTRUCTION.md`](AI_INSTRUCTION.md)

# 🖥️ C Language Assignments

A collection of console-based programs written in **C** as part of my C programming coursework.

---

## 📁 Projects

### 1. 🧮 CALCI.c — Calculator

A simple menu-driven calculator that performs basic arithmetic operations.

**Features:**
| Option | Operation |
|--------|-----------|
| 1 | Addition (+) |
| 2 | Subtraction (-) |
| 3 | Multiplication (*) |
| 4 | Division (/) |

**Highlights:**
- Accepts two `double` values for precision
- Handles division by zero gracefully
- Clean menu interface

#### 📸 Terminal Output Screenshot
![CALCI Output](screenshots/CALCI_output.jpg)

---

### 2. 🏧 atm.c — ATM Application

A console-based ATM simulation with PIN authentication and account management.

**Features:**
| Option | Description |
|--------|-------------|
| PIN Login | Validates against stored PIN (default: `1234`) |
| 1. Check Balance | Displays current balance (starts at Rs. 5000.00) |
| 2. Deposit Money | Adds entered amount; rejects zero or negative values |
| 3. Withdraw Money | Deducts amount if balance is sufficient |
| 4. Exit | Ends the session with a farewell message |

**Highlights:**
- `do-while` loop keeps the menu active until user exits
- `switch` statement handles all menu choices
- Full input validation for deposits and withdrawals

#### 📸 Terminal Output Screenshot
![ATM Output](screenshots/ATM_output.jpg)

---

### 3. 🎓 student_database.c — Student Database

A console program that collects and displays details for a group of students. Each record contains a roll number, name, cut-off score, city, and dream/goal.

**Features:**
| Field | Description |
|-------|-------------|
| Roll Number | Student's integer identifier |
| Name | Student's name |
| Cut-off | Student's cut-off score, displayed to two decimal places |
| City | Student's city |
| Dream | Student's stated dream or goal |

**Highlights:**
- Accepts a student count and gathers the five fields for each student
- Stores records in an array of `struct student` (maximum capacity: 100)
- Uses separate input and display functions
- Prints all entered records in a readable format

> **Note:** This program displays the records entered during the current run; it does not save them to a file. The source currently uses `conio.h` (`clrscr()` and `getch()`), so it requires a Turbo C/Borland-compatible environment unless those legacy console calls are replaced for your compiler.

#### 📸 Terminal Output Screenshot
![Student Database Output](screenshots/student_database_output.svg)

---

### 4. 📝 FEEDBACK.C — Feedback File Program

A file-handling program that creates a feedback file, appends feedback about C programming classes, and reads the saved contents back to the terminal.

**Highlights:**
- Creates `feedback.txt` and writes an initial heading
- Appends five feedback statements to the file
- Reads and displays the complete file contents
- Uses `fopen`, `fprintf`, `fgets`, and `fclose`

> **Note:** This program uses `conio.h`, `clrscr()`, and `getch()`, so it requires a Turbo C/Borland-compatible environment unless those legacy console calls are replaced.

#### 📸 Terminal Output Screenshot
![Feedback Output](screenshots/FEEDBACK_output.svg)

---

## 🛠️ How to Compile & Run

Make sure you have **GCC** installed for the Calculator and ATM programs.

```bash
# Calculator
gcc CALCI.c -o calci
./calci

# ATM Application
gcc atm.c -o atm
./atm
```

`student_database.c` and `FEEDBACK.C` use legacy `conio.h` functions and are not directly compatible with standard GCC. Run them in Turbo C/Borland C, or replace `clrscr()`/`getch()` and remove the `conio.h` include before compiling with GCC.

> **Windows users:** Use [MinGW](https://www.mingw-w64.org/) or [TDM-GCC](https://jmeubank.github.io/tdm-gcc/) for the programs compatible with GCC.

---

## 📚 Concepts Covered

- `printf` / `scanf` for I/O
- `if-else` conditional statements
- `switch-case` for menu handling
- `do-while` loop
- Data types: `int`, `float`, `double`
- Structures, arrays, and functions
- File handling with `fopen`, `fprintf`, `fgets`, and `fclose`
- Input validation & error handling

---

## 👤 Author

**saba1207B**  
GitHub: [@saba1207B](https://github.com/saba1207B)

---

*Made with ❤️ as part of C Language coursework.*
