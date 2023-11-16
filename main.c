#include "shell.h"

/**
 * main - Entry point of the program
 *
 * This is the main function that serves as the entry point for the program.
 * It runs an infinite loop where it displays the prompt, reads a command,
 * and executes the command.
 *
 * Return: Always 0 (success)
 */

int main(void) {
    char muss_command[142];

    while (true) {
        display_muss_prompt();
        read_muss_command(muss_command, sizeof(muss_command));
        execute_muss_command(muss_command);
    }





    return 0;
}

