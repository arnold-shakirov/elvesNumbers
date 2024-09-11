# Number Sum Calculator (Elves Numbers)

This is a simple C++ console program that takes a line of input, extracts the first and last digit found in the input, and adds the corresponding number to a running sum. If only one digit is found, that number is divided by two before being added to the sum.

## Features

- Extracts numbers from user input.
- Handles both single and multiple-digit inputs.
- Provides an option to continue or stop the program.
- Displays the cumulative sum at the end of the program.

## How it Works

1. The user is prompted to input a line of text that contains numbers.
2. The program searches the input for digits. 
   - If two digits are found, it combines them into a two-digit number and adds it to the sum.
   - If only one digit is found, it divides the number by 2 and adds it to the sum.
3. The program then asks if the user wants to continue. 
   - If "yes" is input, the program will prompt for another line.
   - If "no" is input, the program ends and displays the total sum.
4. If an invalid response is entered, the program notifies the user that the response is not valid.

## Getting Started

### Prerequisites

- C++ compiler (g++, clang++, etc.)

### Compilation

To compile the program, use the following command:

```bash
g++ -o elves elves.cpp
