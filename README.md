# number-guessing-game
A C command-line program where the user guesses a randomly generated number between 1 and 100 with interactive hints and attempt tracking.

**Note:** The user interface displays prompt messages in French.

**Built With**

- C Language
- GCC Compiler( via Code::Blocks / Dev C++)

**Key Features**

- **Dynamic Random Generation:** Uses `<time.h>` and `rand()` to produce a unique secret number for each run.
- **Interactive Hints:** Guides the user with "too high" or "too low" feedback.
- **Attempt Tracking:** Counts and displays the total number of guesses upon winning.
- **Control Flow:** Implements a `do...while` loop ensuring the game runs until the correct number is guessed.

**Purpose**

Demonstrates core C concepts including standard I/O (`<stdio.h>`), pseudo-random seed initialization (`srand`), loop architecture, and conditional branching (`!=`).

