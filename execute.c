#include "shell.h"

/**
 * execute_muss_command - Executes a command using execve
 * @command_muss: The command to execute
 *
 * This function creates a child process using fork and executes the specified
 * command using execve in the child process. The parent process waits for the
 * child process to complete.
 */

 void execute_muss_command(const char *command_muss) {
    pid_t child_pid = fork();

     if (child_pid == -1) {
         perror("fork");
         exit(EXIT_FAILURE);
     }
     else if (child_pid == 0) {
         execve(command_muss, command_muss, (char *)NULL);
         perror("execve");
         exit(EXIT_FAILURE);
     }
     else {
         wait(NULL);
    }
 }
