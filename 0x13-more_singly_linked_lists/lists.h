#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Promis T Leonce
 * Desc: Header file containing prototypes and definitions for all functions
 *       and types written in the 0x12-more_singly_linked_lists directory.
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif /* LISTS_H */
