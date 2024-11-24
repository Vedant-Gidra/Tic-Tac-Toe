# Tic-Tac-Toe
Here's a README file for your Tic Tac Toe game:

---

# Tic Tac Toe Game

## Introduction  
This is a simple **Tic Tac Toe** game implemented in C++ for two players. The game allows players to take turns placing their markers (`X` or `O`) on a 3x3 board, checks for a winner after every move, and handles invalid inputs gracefully. If no player wins and the board is filled, the game ends in a tie.

---

## Features  
- Interactive console-based gameplay for two players.  
- Validates player input and ensures moves are within bounds and on unoccupied cells.  
- Dynamically checks for a win condition (rows, columns, or diagonals) after every move.  
- Declares the winner or announces a tie if the board is full without a winner.

---

## How to Play  
1. Run the program.  
2. Players take turns entering the **row** and **column** coordinates (0-indexed) to place their markers.  
3. The game board is displayed after each move.  
4. The game ends with a winner announcement or a tie if the board is full.

---

## Example Gameplay  
```plaintext
Welcome To Tic Tac Toe Game
To place O or X give the coordinate
  0 1 2 
0 . . . 
1 . . . 
2 . . . 
Player 1(X) turn: 0 0
  0 1 2 
0 X . . 
1 . . . 
2 . . . 
Player 2(O) turn: 1 1
  0 1 2 
0 X . . 
1 . O . 
2 . . . 
Player 1(X) turn: 0 1
  0 1 2 
0 X X . 
1 . O . 
2 . . . 
Player 2(O) turn: 2 2
  0 1 2 
0 X X . 
1 . O . 
2 . . O 
Player 1(X) turn: 0 2
  0 1 2 
0 X X X 
1 . O . 
2 . . O 
Player 1(X) is the winner.
```

---

## How to Compile and Run  
1. Save the code in a file named `tic_tac_toe.cpp`.  
2. Open a terminal or command prompt and navigate to the directory where the file is located.  
3. Compile the code using a C++ compiler like `g++`:  
   ```bash
   g++ -o tic_tac_toe TicTacToe.cpp
   ```
4. Run the compiled program:  
   ```bash
   ./tic_tac_toe
   ```

---

## Rules  
1. The game board is a 3x3 grid.  
2. Player 1 uses marker `X` and Player 2 uses marker `O`.  
3. Players must input valid coordinates (row and column) for their move.  
4. A player wins by placing three of their markers in a row, column, or diagonal.  
5. The game ends in a tie if the board is full without a winner.

---

Future Enhancements
Currently, the focus is on building logic and algorithms rather than user interface or advanced development features. Possible future enhancements include:

Adding a graphical interface for better user interaction.
Implementing AI for single-player mode.
