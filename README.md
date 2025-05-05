Tic-Tac-Toe Game in C++

Project Description: This is a simple, console-based Tic-Tac-Toe game built using C++. Two players take turns marking 'X' or 'O' on a 3x3 grid by entering numbers 1–9. The game checks for a winner (three in a row, column, or diagonal) or a draw when the board is full. It’s a fun way to practice programming and logic-building skills! This project was created by Abdul Wahab, a 2nd-semester Computer Science student at Air University, Islamabad, as part of my journey to master programming fundamentals and prepare for MERN Stack development.

Concepts Used: 2D Arrays: The 3x3 game board is stored in a 2D char array to track player moves. Functions: Modular functions like displayboard(), player_turn(), and gameover() make the code organized and reusable. Control Structures: Loops (for, while) and conditionals (if, switch) handle game flow, player input, and win/draw logic. Input Validation: Checks ensure players can’t overwrite filled boxes or enter invalid inputs. Boolean Logic: A bool variable tracks draw conditions, and logical checks determine the game’s state (win, draw, or ongoing). Variables and Scope: Global variables (e.g., board, turn) and local variables (e.g., choice) are used effectively to manage game state.

Best Practices Followed: Clear Code Structure: The code is divided into functions, each with a single responsibility (e.g., displaying the board, handling turns), making it easy to read and maintain. User-Friendly Output: The console is cleared (system("cls")) before each board display, and formatted output improves the player experience. Input Handling: A switch statement maps user inputs (1–9) to board positions, and invalid inputs are caught with a default case. Error Prevention: The game checks if a box is already filled before allowing a move, prompting the player to try again. Commented Code: Comments explain key logic (e.g., win conditions), helping others understand the code. Efficient Logic: The gameover() function efficiently checks rows, columns, and diagonals for wins and detects draws when no moves remain.

How to Run

1)Clone this repository:git clone https://github.com/Abdul-wahab113/Tic-Tac-Toe-Game-in-C-.git

2)Compile the C++ file (e.g., using g++):g++ tic_tac_toe.cpp -o tic_tac_toe

3)Run the executable:./tic_tac_toe

4)Follow the prompts to enter numbers (1–9) to place 'X' or 'O' on the board.

Future Improvements: Add a menu to restart or exit the game. Implement AI for single-player mode. Enhance the UI with colors or a graphical interface.

Contact Feel free to reach out via GitHub or email at [wahabahmad800@gmail.com] for feedback or collaboration!


