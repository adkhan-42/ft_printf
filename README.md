_This project has been created as part of the 42 curriculum by adkhan._

# ft_printf

## Description

`ft_printf` is a custom implementation of the standard C library function `printf`. The objective of this project is to recreate the core behavior of `printf` by handling formatted output using variadic arguments, while strictly adhering to the constraints of the 42 curriculum.

This implementation focuses on the mandatory conversion specifiers only and performs all output using the `write` system call. The use of the standard `printf` function or any forbidden functions is completely avoided.

---

## Core Concept: Variadic Functions (`stdarg.h`)

The key feature of `printf` is its ability to accept a variable number of arguments. This behavior is implemented using macros provided by the `<stdarg.h>` header.

### The "Box and Bookmark" Analogy

Imagine the variadic arguments (`...`) as items placed inside a sealed box. You cannot see them directly, and you must retrieve them one at a time, in order.

- **`va_list ap` (The Bookmark)** A special variable that keeps track of your current position inside the argument list.
- **`va_start(ap, format)` (Open the Box)** Initializes the bookmark so that it points to the argument immediately following the last named parameter (`format`).
- **`va_arg(ap, type)` (Grab an Item)**
    
    1. Retrieves the value at the current position.
    2. Automatically advances the bookmark to the next argument.
    
    **Important Note on Type Promotion:**
    
    - `char` and `short` are promoted to `int`
    - `float` is promoted to `double`
    
    Therefore, `va_arg` must always be called using the promoted type.
    
- **`va_end(ap)` (Close the Box)** Cleans up the internal state associated with the argument list. This call is mandatory before returning from the function.

---

## Features

This implementation supports the mandatory conversion specifiers:

- `%c` — character
- `%s` — string
- `%p` — pointer address
- `%d` — signed decimal integer
- `%i` — signed integer
- `%u` — unsigned integer
- `%x` — hexadecimal (lowercase)
- `%X` — hexadecimal (uppercase)
- `%%` — literal percent sign
### Not Implemented

- Flags (`-`, `0`, `.`)
- Field width or precision
- Bonus features
---

## Compilation & Usage

### 1. Build the Library

To compile the static library `libftprintf.a`, run:

Bash
```bash
make
```

### 2. Link with Your Code

To use `ft_printf` in your project, include the header and link the library during compilation.

**In your C file:**

```c showlinenumber
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number: %d\n", "world", 42);
    return (0);
}
```

Compile command:

```bash
cc main.c -L. -lftprintf -o printf_test
```

_(Note: `-L.` tells the compiler to look in the current directory for the library)._
### Makefile Targets

- `make` / `make all` — Compile the library
- `make clean` — Remove object files
- `make fclean` — Remove object files and the library
- `make re` — Rebuild the project

---
## Project Constraints

- Fully compliant with the 42 Norm
- Uses only allowed functions
- Output handled exclusively with `write`
- No use of the standard `printf`
- Successfully passed Moulinette evaluation

---
## Resources

- `man printf`
- `man write`
- 42 project documentation
### AI Usage Statement

AI was used to support brainstorming, gather ideas, and structure concepts. No coding was completed with the assistance of AI.