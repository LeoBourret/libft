# 📚 Libft: My Custom C Library

![Language: C](https://img.shields.io/badge/Language-C-blue.svg)
![Build: Makefile](https://img.shields.io/badge/Build-Makefile-green.svg)
![School: 42 Paris](https://img.shields.io/badge/School-42_Paris-orange.svg)
![Grade: 115/100](https://img.shields.io/badge/Grade-115/100-brightgreen.svg)

## ✨ Overview

`Libft` is the very first projects at 42 Paris, serving as a cornerstone for learning C programming fundamentals. The goal was to **reimplement a set of standard C library functions**, along with some additional utility functions, demonstrating a deep understanding of memory management, string manipulation, and type handling without relying on the original libc.

This project was crucial for building a strong foundation in C and developing rigorous coding practices.

## 🌟 Key Features & Functions

The `Libft` project is divided into three main categories of functions:

### **1. Standard C Library Reimplementations**

*   **Memory Management:**
    *   `ft_memset`: Fills memory with a constant byte.
    *   `ft_bzero`: Writes zeros to a byte string.
    *   `ft_memcpy`: Copies memory area.
    *   `ft_memccpy`: Copies memory area until a character is found.
    *   `ft_memmove`: Copies memory area, handling overlapping areas.
    *   `ft_memchr`: Scans memory for a character.
    *   `ft_memcmp`: Compares two memory areas.
    *   `ft_calloc`: Allocates memory and sets its bytes to zero.
*   **String Manipulation:**
    *   `ft_strlen`: Calculates the length of a string.
    *   `ft_strlcpy`: Copies a string with size limit.
    *   `ft_strlcat`: Concatenates a string with size limit.
    *   `ft_strchr`: Locates character in string.
    *   `ft_strrchr`: Locates character in string from reverse.
    *   `ft_strnstr`: Locates a substring in a string.
    *   `ft_strncmp`: Compares two strings.
    *   `ft_strdup`: Duplicates a string.
    *   `ft_atoi`: Converts ASCII string to integer.
*   **Character Type Checks:**
    *   `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`: Character type checking functions.
    *   `ft_toupper`, `ft_tolower`: Converts character case.

### **2. Additional Utility Functions**

*   `ft_substr`: Extracts a substring from a string.
*   `ft_strjoin`: Joins two strings.
*   `ft_strtrim`: Trims leading/trailing characters from a string.
*   `ft_split`: Splits a string by a delimiter into an array of strings.
*   `ft_itoa`: Converts an integer to an ASCII string.
*   `ft_strmapi`: Applies a function to each character of a string to create a new one.
*   `ft_striteri`: Applies a function to each character of a string.
*   `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Functions to write characters/strings/numbers to a file descriptor.

### **3. Linked List Functions (Bonus Part)**

*   Implemented a set of functions for basic linked list manipulation, demonstrating understanding of dynamic data structures:
    *   `ft_lstnew`: Creates a new list element.
    *   `ft_lstadd_front`: Adds an element at the beginning of a list.
    *   `ft_lstsize`: Counts the number of elements in a list.
    *   `ft_lstlast`: Finds the last element of a list.
    *   `ft_lstadd_back`: Adds an element at the end of a list.
    *   `ft_lstdelone`: Deletes a single list element.
    *   `ft_lstclear`: Deletes and frees all elements of a list.
    *   `ft_lstiter`: Applies a function to each element of a list.
    *   `ft_lstmap`: Applies a function to each element to create a new list.

## 🛠️ Technologies Used

*   **Language:** C
*   **Build System:** Makefile
*   **Memory Management:** Explicit `malloc`, `free`, `calloc` for custom allocations.

## 🚀 How to Use

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/yourusername/libft.git
    cd libft
    ```
2.  **Compile the library:**
    ```bash
    make
    ```
    This will generate `libft.a`.
3.  **Include in your project:**
    To use the functions in your own C project, include the `libft.h` header and link against `libft.a` during compilation:
    ```bash
    gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
    ```

## 🎓 Learning Outcomes

This project was fundamental in solidifying my knowledge of:

*   **C Programming Fundamentals:** Deep understanding of pointers, arrays, strings, and memory allocation/deallocation.
*   **Memory Management:** Mastering manual memory handling to prevent leaks and errors.
*   **Code Rigor & Robustness:** Developing clean, efficient, and error-proof code.
*   **Data Structures:** Practical implementation of linked lists (bonus part).
*   **Makefile Usage:** Efficiently managing compilation and linking processes.
