/**
 * @file jreadline.h
 * @author Joseph Leskey
 * @date 12 March 2025
 */

#ifndef J_READ_LINE_H
#define J_READ_LINE_H

#include <stdio.h>

/** Toogle for printing a newline after prompt input */
#define PROMPT_NEWLINE 0

/** The incrementation factor of dynamically allocated char arrays */
#define STRING_INCREMENT 16

/**
 * Display prompt until the user inputs a useful value.
 *
 * @param[in] prompt The prompt to display
 * @returns A meaningful line of input from `stdin`
 */
char *promptInput(char const *prompt);

/**
 * Read a line from a given file descriptor
 *
 * @param[in] stream The file descriptor
 * @returns The text of an user input line or `NULL` if EOF is reached
 */
char *jReadLine(FILE *stream);

#endif // J_READ_LINE_H
