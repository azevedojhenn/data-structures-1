//
// Created by jhennifer on 28/08/24.
//

#ifndef MYLIB_H
#define MYLIB_H

/**
 * Create a Random List
 * @param list Pointer to the first element of the vector.
 * @param size Vector size.
 */
void create_random_list(int *list, int size);

/**
 * Print the values of the list
 * @param list Pointer to the first element of the vector.
 * @param size Vector size.
 */
void show_list(int *list, int size);

/**
 * Read data from the user
 * @param list Pointer to the first element of the vector.
 * @param size Vector size.
 */
void read_data(int *list, int size);

/**
 * Write data to the user
 * @param list Pointer to the first element of the vector.
 * @param size Vector size.
 */
void write_data(int *list, int size);

#endif
