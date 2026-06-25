# CS 210 Project Three - Corner Grocer

## Project Summary

The purpose of this project was to help Corner Grocer track how often grocery items were purchased throughout the day. The program reads data from an input file, counts the number of times each item appears, and then gives the user different ways to view that information.

This project solves the problem of having to manually count grocery purchases and gives the store an easy way to identify shopping trends and see which items are purchased the most.

---

## What I Did Particularly Well

I think one of the strongest parts of this project was organizing the program into separate files and using object-oriented programming principles. Creating a separate `CornerGrocer` class kept most of the logic out of `main()` and made the code easier to follow.

I also feel that choosing to use a `map` was a good decision because it automatically sorted the grocery items alphabetically and made counting frequencies much simpler. I was also happy with the menu system and input validation because the program handles bad user input without crashing.

---

## Areas for Improvement

If I continued developing this project, I would improve the error handling even more by displaying custom messages if the input file cannot be opened or if the backup file cannot be created.

I would also add additional features such as:

- Adding new grocery items during runtime
- Removing items from the grocery list
- Displaying the most frequently purchased item
- Sorting items by popularity instead of alphabetically
- Saving modifications back to the original input file

These improvements would make the program more useful, flexible, and user-friendly.

---

## Most Challenging Parts of the Project

The most difficult part of this project was learning how to use `map<string, int>` correctly and figuring out the best way to organize the program into classes and functions.

At first, I struggled with understanding how maps automatically create entries and update values. I spent extra time reading through the C++ documentation, reviewing course materials, and testing small pieces of code until it finally started making sense.

Another challenge was handling user input correctly. I had to learn how to clear invalid input from the stream and prevent the program from getting stuck in an infinite loop. Working through those problems helped me become more comfortable with debugging and troubleshooting.

### Resources Added to My Support Network

- SNHU course materials and examples
- C++ Standard Library documentation
- Microsoft Learn documentation
- YouTube tutorials covering maps and file handling
- Testing small programs to better understand new concepts

---

## Transferable Skills

This project helped me improve several skills that will be useful in future classes and software development projects, including:

- Object-oriented programming
- File input and output
- Working with classes and methods
- Using Standard Template Library (STL) containers
- Input validation and error handling
- Debugging and testing code
- Breaking a large problem into smaller tasks

These are skills that I expect to use in almost every programming project moving forward.

---

## Maintainability, Readability, and Adaptability

I made this program maintainable by separating responsibilities into different functions and files instead of placing all of the code inside one source file.

I also improved readability by:

- Using meaningful variable and function names
- Creating small functions that perform one task
- Adding comments to explain important sections of code
- Keeping the menu system and program flow easy to follow

The program is also adaptable because additional features can be added to the `CornerGrocer` class without significantly changing the rest of the code. New reports, menu options, and file operations could be added with only minor modifications, making the program easier to expand in the future.

---

## Author

**Amanda Peplinski**

Southern New Hampshire University

CS 210 – Programming Languages

Project Three – Corner Grocer
