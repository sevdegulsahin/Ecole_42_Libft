*This project has been created as part of the 42 curriculum by sevdsahi.*

# Libft

## Description
**Libft** is the first foundational project of the 42 school core curriculum. The goal of this project is to recreate a custom C library consisting of standard `libc` functions, as well as additional utility functions for string manipulation, memory management, and linked list operations.

Since 42 students are not allowed to use most standard C library functions in future projects, this custom static library (`libft.a`) serves as a crucial toolkit that will be continuously utilized and expanded throughout the entire curriculum. It provides a deep understanding of basic algorithms, pointer manipulation, and dynamic memory allocation.

## Detailed Library Description
The library is divided into three main parts, providing a wide range of utilities:

### 1. Libc Functions
Custom implementations of standard C library functions.
* **Character checks & manipulation:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **String manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* **Memory manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* **Utility:** `ft_atoi`, `ft_calloc`, `ft_strdup`

### 2. Additional Functions
Functions designed to handle string and memory operations not natively found in standard `libc`, or formatted specifically for 42 requirements.
* **String generation & parsing:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
* **Function application:** `ft_strmapi`, `ft_striteri`
* **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List Functions
A comprehensive set of functions to initialize, manipulate, and clear dynamic linked list structures (`t_list`).
* **Node creation & addition:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
* **List traversal & size:** `ft_lstsize`, `ft_lstlast`, `ft_lstiter`
* **Memory clearing & mapping:** `ft_lstdelone`, `ft_lstclear`, `ft_lstmap`

## Instructions

### Compilation
The library is compiled using a `Makefile`. The compiler used is `cc` with the mandatory flags `-Wall -Wextra -Werror`.

To compile the library and generate the `libft.a` static library, run:
```bash
make
```

Other available Makefile rules:

| Rule     | Description                              |
| -------- | ----------------------------------------- |
| `clean`  | Removes object files                      |
| `fclean` | Removes object files and the library      |
| `re`     | Runs `fclean` then `all`                  |

### Usage
Once `libft.a` is compiled, include the header in your source file:
```c
#include "libft.h"
```

Then compile your program by linking it against the library:
```bash
cc -Wall -Wextra -Werror your_program.c libft.a -o your_program
```

## Resources

### Classic references
* `man 3 <function>`
* *The C Programming Language* — Kernighan & Ritchie
* [https://cplusplus.com/reference/cstring/](https://cplusplus.com/reference/cstring/)
* [https://cplusplus.com/reference/cstdlib/](https://cplusplus.com/reference/cstdlib/)
* [https://en.cppreference.com/w/c](https://en.cppreference.com/w/c)
* Beej's Guide to C — [https://beej.us/guide/bgc/](https://beej.us/guide/bgc/)

### 42 and community resources
* 42 Libft subject PDF
* [https://github.com/ragouel/libft_cheat_sheet](https://github.com/ragouel/libft_cheat_sheet)
* [https://42-cursus.gitbook.io/guide/0-rank-00/libft](https://42-cursus.gitbook.io/guide/0-rank-00/libft)

### AI usage
AI tools (such as ChatGPT and Claude) were used in this project for the following purposes:
* Understanding the edge cases and undefined behavior of standard functions before reimplementing them
* Discussing logic and structural ideas for `ft_split`, `ft_strtrim`, `ft_substr`, and the linked list functions
* Getting a faster grasp of pointer arithmetic and memory management concepts
* Getting suggestions on naming conventions and code readability
* Getting a starting template for the Makefile and project structure

No function was copied directly from AI output. All implementations were written by the author; AI was only used as a learning aid and code reviewer.

## Author
* **sevdsahi** — 42 Student