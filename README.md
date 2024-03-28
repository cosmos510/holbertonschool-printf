# Custom `printf` Function Implementation in C

This project implements a custom version of the `printf` function in C, providing a simple yet powerful way to format and print text to the standard output. This project was made in the case our Study in Holberton School Thonon.

## Compilation commande 
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Requirements

All the files has to be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

## Features

- Supports format specifiers for characters (`%c`), strings (`%s`), integers (`%d`, `%i`), octal(`%o`), hexadecimal (`%x``%X`), and unsigned int(`%u`).
- Handles the basic functionality of the `printf` function, including the ability to print formatted output with placeholders.
- Provides a modular and extensible design, making it easy to add support for additional format specifiers or modify existing functionality.

## Usage

To use the custom `printf` function in your C program, follow these steps:

1. Include the `main.h` header file in your source file.
2. Call the `_printf` function with the desired format string and optional arguments.

## Example
```bash
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("The answer is %d.\n", 42);

    return (0);
}
```

Running the above code will produce the following output:
```bash
Hello, world!
The answer is 42.
```

## How It Works

The `parse_format` function in `main.c` is responsible for parsing the format string, identifying format specifiers, and calling the corresponding printing functions to print the formatted output. Each format specifier is associated with a specific printing function, allowing for modular and efficient processing of the input string.

## Further information

See the man page or run it with man ./man_3_printf

## Authors

This project was developed by:

- [Soufian](https://github.com/Souff06)
- [Maxime](https://github.com/cosmos510)

#C-23-Thonon les bains

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request. Make sure to follow the project's coding style and conventions.

<img src="https://imgur.com/a/GDGRMVU">
