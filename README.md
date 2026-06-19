

# Number Guessing Game
 
A simple command-line game written in C. The computer picks a random
number between 1 and 100, and you try to guess it. After each guess,
you're told whether to go higher or lower, until you land on the
right number.
 
## How it works
 
1. The program seeds the random number generator using the current
   time, then picks a random integer between 1 and 100.
2. It repeatedly asks you for a guess.
3. For each guess, it tells you:
   - **"Too high!"** — guess again, lower this time.
   - **"Too low!"** — guess again, higher this time.
   - **"Correct!"** — you win, and it shows how many attempts you took.
4. The game also handles bad input gracefully:
   - Typing something that isn't a number (e.g. `abc`) is rejected
     without crashing.
   - Guesses outside the 1–100 range are rejected with a reminder.
   - If input runs out unexpectedly (e.g. piping a file that ends
     early), the game exits cleanly instead of looping forever.
## Files
 
| File      | Description                  |
|-----------|-------------------------------|
| `main.c` | The full game source code     |
 
## Building
 
You'll need a C compiler such as `gcc` or `clang`.
 
```bash
gcc -Wall -Wextra -o guess guess.c
```
 
- `-Wall -Wextra` turns on extra compiler warnings — good practice
  for catching bugs early.
- `-o guess` names the compiled program `guess` (use `guess.exe` on
  Windows if you prefer).
## Running
 
```bash
./game
```
 
On Windows (after compiling with something like MinGW):
 
```bash
game.exe
```
 
## Example session
 
```
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100.
Enter your guess: 50
Too high!
Enter your guess: 25
Too low!
Enter your guess: 37
Too high!
Enter your guess: 31
Correct! You guessed it in 4 attempts.
```
