# Custom `printf` Function Implementation in C

This project implements a custom version of the `printf` function in C, providing a simple yet powerful way to format and print text to the standard output.

## Features

- Supports format specifiers for characters (`%c`), strings (`%s`), and integers (`%d`, `%i`).
- Handles the basic functionality of the `printf` function, including the ability to print formatted output with placeholders.
- Provides a modular and extensible design, making it easy to add support for additional format specifiers or modify existing functionality.

## Usage

To use the custom `printf` function in your C program, follow these steps:

1. Include the `main.h` header file in your source file.
2. Call the `_printf` function with the desired format string and optional arguments.

```c
#include "main.h"

int main(void) {
    _printf("Hello, %s!\n", "world");
    _printf("The answer is %d.\n", 42);
    return 0;
}

## Example

Running the above code will produce the following output:

Hello, world!
The answer is 42.


## How It Works

The `parse_format` function in `main.c` is responsible for parsing the format string, identifying format specifiers, and calling the corresponding printing functions to print the formatted output. Each format specifier is associated with a specific printing function, allowing for modular and efficient processing of the input string.

## Authors

This project was developed by:

- [Author Name](https://github.com/cosmos510)
- [Author Name](https://github.com/author_username)

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request. Make sure to follow the project's coding style and conventions.

