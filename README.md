# ROT13 Cipher Program in C

## Overview

This program is a C implementation of the ROT13 cipher, a simple and widely known substitution cipher. The ROT13 ("rotate by 13 places") cipher replaces each letter with the 13th letter after it in the alphabet, effectively rotating the alphabet halfway around.

## What is ROT13 Cipher?

ROT13 is a special case of the Caesar cipher, developed in ancient Rome. In ROT13, the alphabet is shifted 13 places, so 'A' becomes 'N', 'B' becomes 'O', and so forth. This cipher is symmetric, meaning the same operation is used for both encoding and decoding. The ROT13 cipher is not used for secure communication as it is very easily broken, but it can be useful for hiding spoilers or puzzle solutions in a non-serious context.

## Features

- Transforms any given alphabetic string using the ROT13 algorithm.
- Maintains non-alphabetic characters as is.
- Preserves the case (uppercase or lowercase) of the original text.

## Compilation and Execution

1. **Compile the Program:**
   - Use a C compiler to compile the program. For example, if using GCC:
     ```
     gcc rot13.c -o rot13
     ```
2. **Run the Program:**
   - The program expects a single command-line argument representing the string to be transformed.
   - Example of execution:
     ```
     ./rot13 Hello
     ```

## Usage

- The program is executed from the command line, where the user provides the string to be encoded in ROT13.
- The output will be the ROT13 transformation of the input string.

## Limitations

- The program currently handles input strings up to 99 characters. Longer inputs require additional handling for dynamic memory allocation.
- It is designed for educational and entertainment purposes and not for encrypting sensitive data.

## Example

- Input: `Hello World!`
- Output: `Uryyb Jbeyq!`
- Here, each alphabetic character in "Hello World!" has been shifted 13 positions in the alphabet, while the exclamation mark remains unchanged.

## References

- [ROT13 - Wikipedia](https://en.wikipedia.org/wiki/ROT13): Provides detailed information about the ROT13 cipher and its historical background.

## License

This project is open source and available under the [MIT License](LICENSE).
