#include "shell.h"

/**
 * muss_print - Prints a message to the standard output
 * @muss_message: The message to be printed
 *
 * This function writes the specified message to the standard output using
 * the write system call. It expects a null-terminated string as input.
 */

void muss_print(const char *muss_message) {
    write(STDOUT_FILENO, muss_message, strlen(muss_message));
}
