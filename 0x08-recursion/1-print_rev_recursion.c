#include <stdio.h>

void _print_rev_recursion(char *s)
{
    if (*s != '\0')
    {
        _print_rev_recursion(s + 1); // Recursively call the function with the next character
        putchar(*s);                // Print the current character
    }
}

int main()
{
    char str[] = "Hello, World!";
    _print_rev_recursion(str);
    putchar('\n');  // Print a newline character at the end
    return 0;
}
