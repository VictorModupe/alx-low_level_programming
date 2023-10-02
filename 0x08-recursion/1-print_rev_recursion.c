#include <stdio.h>
/**                                                                                                                 
 * _print_rev_recursion - Prints a string in reverse.                                                               
 * @s: The string to be printed in reverse.                                                                         
 */
void _print_rev_recursion(char *s)
{
    if (*s != '\0')
    {
        _print_rev_recursion(s + 1);
        putchar(*s);
    }
}

int main()
{
    char str[] = "Hello, World!";
    _print_rev_recursion(str);
    putchar('\n');  // Print a newline character at the end
    return 0;
}
