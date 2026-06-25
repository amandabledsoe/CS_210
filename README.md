# CS 210 Project Three - Corner Grocer

## Overview

The purpose of this project is to create a grocery item tracking program for the fictional company **Corner Grocer**. The program reads grocery purchase data from an input file, counts how many times each item appears, and gives the user several ways to view that information.

This project demonstrates the use of:

- Object-oriented programming (OOP)
- Classes and functions
- File input and output
- Maps from the C++ Standard Library
- Input validation
- Menu-driven applications

---

## Program Features

The program provides the following menu options:

1. Search for the frequency of a specific grocery item.
2. Display the frequency of all grocery items.
3. Display a histogram of item frequencies.
4. Exit the program.

---

## Project Structure

```text
CornerGrocer/
│
├── main.cpp
├── CornerGrocer.h
├── CornerGrocer.cpp
├── CS210_Project_Three_Input_File.txt
├── frequency.dat
└── README.md
```

---

## Design Approach

I decided to use a `map<string, int>` to store the grocery items and their frequencies.

A map was a good choice because:

- It automatically keeps the items sorted alphabetically.
- It allows quick lookups when searching for an item.
- It prevents duplicate keys by storing only one entry per item.
- It makes updating item frequencies simple.

The key represents the grocery item's name, and the value represents the number of times that item appears in the input file.

Example:

```cpp
map<string, int> groceryItems;
```

---

## Class Design

### CornerGrocer Class

#### Private Members

```cpp
map<string, int> groceryItems;
```

Stores all grocery items and their purchase counts.

#### Public Functions

| Function | Purpose |
|----------|----------|
| `LoadFile()` | Reads grocery items from the input file |
| `CreateBackupFile()` | Creates `frequency.dat` |
| `SearchItem()` | Returns the frequency of an item |
| `PrintAllItems()` | Displays all item frequencies |
| `PrintHistogram()` | Displays a histogram using asterisks |

---

## Program Workflow

```text
Start Program
      ↓
Read Input File
      ↓
Store Frequencies in Map
      ↓
Create frequency.dat
      ↓
Display Menu
      ↓
User Makes Selection
      ↓
Execute Selected Option
      ↓
Repeat Until Exit
```

---

## Sample Menu

```text
==========================
      CORNER GROCER
==========================
1 - Search for an item
2 - Display all frequencies
3 - Display histogram
4 - Exit
```

---

## Sample Search

```text
Enter item name: Cranberries
Cranberries purchased 10 time(s).
```

---

## Sample Frequency Output

```text
Apples          4
Beets           3
Broccoli        7
Cauliflower     6
Cranberries     10
```

---

## Sample Histogram

```text
Apples          ****
Beets           ***
Broccoli        *******
Cauliflower     ******
Cranberries     **********
```

---

## Challenges

One of the biggest challenges during this project was deciding how to store the grocery information efficiently. I originally considered using arrays or vectors, but they would have required additional loops to search for items and update frequencies.

Using a map made the program much simpler because it automatically creates a new entry when an item is encountered for the first time and increments the count whenever the item appears again.

Another challenge was implementing input validation to make sure the program would not crash if the user entered invalid menu options.

---

## Possible Improvements

If I continued developing this project, I would consider adding:

- Case-insensitive searches
- The ability to add new grocery items
- The ability to remove grocery items
- Colored console output
- Saving modifications back to the original input file
- Additional statistics, such as the most frequently purchased item

---

## Skills Demonstrated

- Object-Oriented Programming
- Classes and Methods
- File Input and Output
- Standard Template Library (STL)
- Maps
- Input Validation
- Modular Programming
- Documentation and Code Comments

---

## Author

**Amanda Peplinski**

Southern New Hampshire University

CS 210 – Programming Languages

Project Three – Corner Grocer
