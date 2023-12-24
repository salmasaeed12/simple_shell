# simple_shell
Creating a shell involves various components and concepts.
## Overview

This is a basic implementation of a Unix shell in C. The shell provides a command-line interface to interact with the operating system. It supports executing external commands, piping, and basic input/output redirection.

## Features

- **Command Execution:** Execute external commands entered by the user.
- **Piping:** Support for chaining multiple commands using pipes (`|`).
- **Redirection:** Allow input and output redirection (`<`, `>`).
- **Built-in Commands:** Support for built-in commands like `cd` and `exit`.
- **Signal Handling:** Handle signals like `Ctrl+C` to interrupt a running process.
- **Prompt:** Display a simple prompt for user input.

## Getting Started

### Prerequisites

- This program is written in C and requires a C compiler (e.g., GCC).

### Compilation

Compile the program using the provided Makefile:

```bash
make
