#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function prototype for rot13 function
char rot13(char letter);

int main(int argc, char *argv[])
{
    // Check if an argument is provided
    if (argc != 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    // Use the first argument as the input string
    char *input = argv[1];
    char rot13String[100]; // Assuming a maximum length of 99 characters for rot13 string

    // Iterate through each character in the input string
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isalpha(input[i]))
        {
            // Call the rot13 function to perform the ROT13 transformation
            rot13String[i] = rot13(input[i]);
        }
        else
        {
            rot13String[i] = input[i];
        }
    }

    // Null-terminate the rot13 string
    rot13String[strlen(input)] = '\0';

    // Output the resulting string
    printf("ROT13 string: %s\n", rot13String);

    return 0;
}

// Function to perform ROT13 transformation on a letter
char rot13(char letter)
{
    // Convert uppercase letter to number
    int number;
    if (isupper(letter))
    {
        number = letter - 'A';
    }
    else
    {
        number = letter - 'a';
    }

    // Add 13 to the number
    number = (number + 13) % 26;

    // Convert the number back to a letter
    char result;
    if (isupper(letter))
    {
        result = number + 'A';
    }
    else
    {
        result = number + 'a';
    }

    return result;
}
