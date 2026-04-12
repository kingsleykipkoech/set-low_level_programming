# Getting Started with Command Line Arguments in C

Welcome to my project on handling command-line arguments in C! During this section of the curriculum, I explored how to pass input directly into a program right when launching it from the terminal. 

Instead of hardcoding values or prompting for user input while the program is already running, I learned how to leverage `argc` (which tracks the total number of arguments passed) and `argv` (the array of strings containing the arguments themselves).

This unlocks a ton of flexibility and allows programs to behave dynamically based on how they are called—just like standard CLI tools!

### What's Inside:

Here is a breakdown of the mini-programs I built to practice these concepts:

* **`0-whatsmyname.c`** — A script that prints its own name. The neat thing is that if you rename the compiled executable tool, it automatically detects its new name without having to be recompiled!
* **`1-args.c`** — A program that outputs the exact number of arguments you passed into the terminal alongside the command.
* **`2-args.c`** — A tool that loops through and echoes back every single argument that it receives, printing each on a new line.
* **`3-mul.c`** — A basic baseline terminal calculator that accepts two numbers as arguments and multiplies them together, fully equipped with error handling.
* **`4-add.c`** — An addition program that takes an unlimited sequence of positive numbers and adds them all up. It loops through each string character-by-character to verify it's a digit, automatically returning an error if it catches any rogue symbols.

All code here strictly passes the Betty linter/formatting standards, with a heavy emphasis on proper argument parsing and unused variable management.
