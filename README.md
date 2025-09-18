🎮 Tic-Tac-Toe — C++ Console Edition

![Language](https://img.shields.io/badge/C%2B%2B-17%2B-00599C?logo=c%2B%2B&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-6aa84f)
![Type](https://img.shields.io/badge/Project-Console%20Game-764abc)
![Status](https://img.shields.io/badge/Status-Stable-brightgreen)
![Made with ❤️](https://img.shields.io/badge/Made%20with-%E2%9D%A4%EF%B8%8F-ff477e)

Step right up to the terminal arcade! This is a fast, clean, and surprisingly addictive two‑player Tic‑Tac‑Toe built in C++. Crafted by Abdul Wahab (Air University, Islamabad) while mastering programming fundamentals on the journey toward full‑stack greatness.

```text
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃  1 | 2 | 3     X's turn         ┃
┃ ---+---+---                     ┃
┃  4 | 5 | 6     Pick a square →  ┃
┃ ---+---+---                     ┃
┃  7 | 8 | 9                      ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
```

### Why you'll love it
- **Instant fun**: zero setup beyond a compiler.
- **Readable structure**: small, focused functions keep logic clear.
- **Rock‑solid rules**: input checks, win/draw detection, clean turns.
- **Perfect practice**: arrays, control flow, and state management.

### Features
- **Two‑player local play**: `X` vs `O` on a 3×3 grid.
- **Smart validation**: prevents overwriting and invalid moves.
- **Win logic**: rows, columns, diagonals; clean draw detection.
- **Console refresh**: tidy board after every move.

### Quickstart

#### Windows (PowerShell)
```powershell
g++ .\TicTacToe.cpp -std=c++17 -O2 -o TicTacToe.exe
./TicTacToe.exe
```

#### Linux / macOS (Terminal)
```bash
g++ TicTacToe.cpp -std=c++17 -O2 -o tictactoe
./tictactoe
```

### How to play
1. **Run** the game and check whose turn it is (`X` starts).
2. **Choose** a square number (1–9) to place your mark.
3. **Line up three** in a row, column, or diagonal to win.
4. If the board fills with no winner, it’s a **draw**.

### Project layout
```
TicTacToe-Cpp/
├─ TicTacToe.cpp   # Game source
├─ TicTacToe.exe   # Windows build (optional, may be ignored)
└─ README.md       # You are here
```

### Under the hood (learning notes)
- **2D board**: char matrix stores the grid state.
- **Functions**: `displayBoard()`, `playerTurn()`, `gameOver()` keep logic modular.
- **Control flow**: loops and conditionals orchestrate the round.
- **Validation**: guards stop invalid/duplicate inputs.
- **Boolean checks**: tidy win/draw state calculation.

### Roadmap (spice it up!)
- [ ] Single‑player mode with a simple AI (minimax or heuristics)
- [ ] Colorized console output
- [ ] Replay/Reset menu
- [ ] Scoreboard across rounds

### Contributing
Got improvements or creative twists? Fork it, make your change, and open a PR. Clean, readable code wins hearts.

### Author & Contact
Made by **Abdul Wahab**. Questions or feedback? Email: `wahabahmad800@gmail.com`.

Enjoy the game — and happy hacking! ✨