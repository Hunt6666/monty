#include "monty.h"
/**
 * getfunc - function takes in a specifier in the form of a char
 * and returns the associated function to print an argument of that type
 *
 * @s: type char, the specifier passed in
 *
 * Description: an array of structs is initialized with all possible specifiers
 * and the associated functions that will print arguments of that type
 *
 * Return: integer value, the number of characters printed when the called
 * function (via a function pointer) prints characters
*/

void (*getfunc(char *s))
(stack_t **stack, unsigned int line_number)
{
    int i = 0;

    instruction_t arr[] = {
            {"push", push},
            {"pall", pall},
            // {"pop", pop},
            // {"swap", swap},
            // {"add", add},
            // {"nop", nop},
            // {"sub", sub},
            // {"div", div},
            // {"mul", mul},
            // {"mod", mod},
            // {"pchar", pchar},
            // {"pstr", pstr},
            // {"rotl", rotl},
            // {"rotr", rotr},
            // {"stack", stack},
            // {"queue", queue},
            {'\0', NULL}
        };


    while (arr[i].opcode != '\0')
    {
        if (!strcmp(s, arr[i].opcode))
            return (arr[i].f);
        i++;
    }
    return(NULL);
}