# C-SpiralArrayFill

This program demonstrates how to fill a 2D array in a spiral pattern.

## Usage
Compile the program using a C compiler.
Run the compiled executable.
The program will fill a 2D array of size 5x6 in a spiral pattern using the arrayFuellen function. It will then print the filled array using the arrayAusgeben function.

## Code
The code consists of two main functions: arrayFuellen and arrayAusgeben, as well as the main function.

The arrayFuellen function takes the number of rows, number of columns, and the array itself as input. It iterates through the array in a spiral pattern, starting from the outermost layer and moving towards the center. It fills each element of the array with a consecutive value. The function uses variables to keep track of the boundaries of the spiral pattern and increments the value to be assigned to each array element.

The arrayAusgeben function takes the number of rows, number of columns, and the array itself as input. It iterates through the array and prints each element in a formatted manner.

The main function creates a 2D array of size 5x6 and calls the arrayFuellen function to fill it in a spiral pattern. It then calls the arrayAusgeben function to print the filled array.

## License
This code is licensed under the MIT License.

Feel free to use and modify this code according to the terms of the license.
