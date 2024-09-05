# Sudoku Solver

This is a simple Sudoku solver implemented in C++ using a backtracking algorithm. The program is designed to solve a given Sudoku puzzle by filling in the empty cells of a 9x9 grid. It checks each possible number for each empty cell and recursively tries to solve the puzzle.

## How It Works

The Sudoku solver uses a backtracking algorithm, which is a depth-first search approach to solve the puzzle. The process involves:

1. **Finding an Empty Cell**: The algorithm scans the grid to locate the next empty cell (represented by `0`).

2. **Checking Validity**: For each empty cell, the algorithm checks if placing a number (from 1 to 9) in that cell is valid according to Sudoku rules. The rules include:
   - The number must not already exist in the current row.
   - The number must not already exist in the current column.
   - The number must not already exist in the 3x3 sub-grid that contains the cell.

3. **Recursive Backtracking**: If placing a number is valid, the algorithm assigns the number to the cell and recursively attempts to solve the puzzle. If it encounters an invalid state, it backtracks by resetting the cell to `0` and tries the next number.

4. **Completion**: The process continues until the puzzle is solved or all possibilities are exhausted.

## Features

- **Solves Standard 9x9 Sudoku Puzzles**: Works with any valid Sudoku puzzle of size 9x9.
- **Backtracking Algorithm**: Uses a backtracking approach to solve the puzzle.
- **Validates Moves**: Ensures each number placement adheres to Sudoku rules.

## Requirements

- A C++ compiler (e.g., g++, clang++)
- Basic understanding of C++ and Sudoku rules

## Usage

1. **Compile the Code**:
   ```bash
   g++ -o sudoku_solver sudoku_solver.cpp
   ```

2. **Run the Program**:
   ```bash
   ./sudoku_solver
   ```

   The program will display the solved Sudoku puzzle if a solution exists. If no solution exists, it will notify the user.

## Code Overview

- **`solve` Function**: The main function that performs the backtracking algorithm to solve the Sudoku puzzle.
- **`isSafe` Function**: Checks if a number can be placed in a given cell without violating Sudoku rules.
- **`printGrid` Function**: Prints the Sudoku grid to the console.
- **`main` Function**: Initializes the Sudoku grid, calls the `solve` function, and prints the result.

## Example

**Input Sudoku Puzzle**:

```
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```

**Output (Solved Puzzle)**:

```
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

## Notes

- The program currently handles only standard 9x9 Sudoku puzzles.
- The solution relies on the input puzzle being valid and solvable.

Feel free to modify and expand upon this implementation for different Sudoku variations or improvements.
