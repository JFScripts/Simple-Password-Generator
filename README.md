# C Password Generator

This is a simple password generator written in C that creates a random password based on the user's input length. The program uses the current time as a seed for random number generation, ensuring that each run produces a unique result.

## Features

- **Customizable Length:** The user can choose the desired password length.
- **Diverse Character Set:** The password is generated using a mix of lowercase letters, uppercase letters, digits, and special characters.
- **Random Generation:** Utilizes the `rand()` function seeded with the current time to ensure random output.

## Requirements

- A C compiler (e.g., GCC)

## How to Compile

Open your terminal and navigate to the directory containing the source code. Then compile using:

```bash
gcc -o password_generator password_generator.c
