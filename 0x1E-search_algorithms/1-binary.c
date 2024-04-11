#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t left = 0;
    size_t right = size - 1;

    while (left <= right)
    {
        // Print current array being searched
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            if (i > left)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");

        size_t mid = left + (right - left) / 2;

        if (array[mid] == value)
            return mid; // Element found, return index
        else if (array[mid] < value)
            left = mid + 1; // Target is in the right half
        else
            right = mid - 1; // Target is in the left half
    }

    return -1; // Element not found
}
