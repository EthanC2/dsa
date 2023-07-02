#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stdbool.h>
#include <stddef.h>

/*
    SUMMARY:
        Performs a binary search on a sorted array.

    RETURNS:
        `true` if `elem` is in `arr`; `false` otherwise.

    TIME COMPLEXITY:
        Best: O(1)
        Average: O(log n)
        Worst: O(log n)

    SPACE COMPLEXITY:
        Constant: O(1)

    NOTES:
        The equation `left + (right - left ) / 2;` is used to calculate the midpoint instead
        of the classic `(left + right) / 2` because the latter causes integer overflow when
        `left` and `right` are sufficiently large. See "Nearly All Binary Searches ... are Broken" below.

    REFERENCES:
        - "Nearly All Binary Searches and Mergesorts are Broken", by Joshua Bloch for Google Research
            - URL: https://ai.googleblog.com/2006/06/extra-extra-read-all-about-it-nearly.html
*/
bool binary_search(int arr[], size_t len, int elem) 
{
    size_t left = 0;
    size_t right = len - 1;

    while (left <= right)
    {
        size_t mid = left + (right - left) / 2;

        if (arr[mid] == elem)
        {
            return true;
        }
        else if (arr[mid] < elem)
        {
            left = mid + 1;
        }
        else /* arr[mid] > elem */
        {
            right = mid - 1;
        }
    }

    return false;
}

#endif /* BINARY_SEARCH_H */