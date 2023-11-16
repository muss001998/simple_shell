#ifndef SHELL_H
#define SHELL_H

/*
 * The shell header file (shell.h) contains function declarations and
 * the necessary include statements for the shell program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/**
 * display_muss_prompt - Displays the shell prompt
 *
 * This function prints the shell prompt "muss_shell$ " to the standard output.
 * It is used to indicate that the shell is ready to accept user input.
 */
void display_muss_prompt(void);

/**
 * muss_print - Prints a message to the standard output
 * @muss_message: The message to be printed
 *
 * This function writes the specified message to the standard output using
 * the write system call. It expects a null-terminated string as input.
 */
void muss_print(const char *muss_message);

/**
 * read_muss_command - Reads a command from stdin
 * @muss_command: The buffer to store the command
 * @size: The size of the buffer
 *
 * This function reads a command from stdin and stores it in the provided buffer.
 * It removes the trailing newline character from the command.
 */
void read_muss_command(char *muss_command, size_t size);

/**
 * execute_muss_command - Executes a command using execve
 * @command_muss: The command to execute
 *
 * This function creates a child process using fork and executes the specified
 * command using execve in the child process. The parent process waits for the
 * child process to complete.
 */
void execute_muss_command(const char *muss_command);




#endif
