# Number Guessing Game

A small command-line game written in C. The program chooses a random integer between 1 and 100 and you try to guess it. After each guess the program tells you whether the correct number is higher or lower, until you guess correctly.

## Features

- Random number between 1 and 100 (seeded with the current time).
- Prompts for repeated guesses and gives feedback: "Too high!", "Too low!", or "Correct!".
- Handles invalid input (non-numeric text) without crashing.
- Rejects guesses outside the 1–100 range with a reminder.
- Exits cleanly if input ends unexpectedly (EOF).

## Files

- `main.c` — game source code
- `README.md` — this file
- (optional) Makefile — convenience build rules
- (optional) .gitignore — to ignore build artifacts (e.g., the compiled binary)

## Build

You need a C compiler such as `gcc` or `clang`.

To compile:

```bash
gcc -Wall -Wextra -std=c11 -O2 -o game main.c
```

- `-Wall -Wextra` enables extra compiler warnings (recommended).
- `-std=c11` selects the C11 standard (optional but recommended).
- `-O2` enables optimizations.
- `-o game` names the output executable `game`.

Or with `clang`:

```bash
clang -Wall -Wextra -std=c11 -O2 -o game main.c
```

## Run

On Linux or macOS:

```bash
./game
```

On Windows (after compiling with a suitable toolchain, e.g., MinGW):

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

