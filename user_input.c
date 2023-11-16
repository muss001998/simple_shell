#include "shell.h"

/**
 * read_muss_command - Reads a command from stdin
 * @muss_command: The buffer to store the command
 * @size: The size of the buffer
 *
 * This function reads a command from stdin and stores it in the provided buffer.
 * It removes the trailing newline character from the command.
 */

void read_muss_command(char *muss_command, size_t size) {
    if (fgets(muss_command, size, stdin) == NULL) {
        if (feof(stdin)) {
            muss_print("\n");
            exit(EXIT_SUCCESS);
        } else {
            muss_print("Error while reading input.\n");
            exit(EXIT_FAILURE);
        }
    }
    muss_command[strcspn(muss_command, "\n")] = '\0';
}
