#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

#include <stdbool.h>
#include <stddef.h>
/*
    SUMMARY:
        Performs a linear search on a sorted array.

    RETURNS:
        `true` if `elem` is in `arr`; `false` otherwise.

    TIME COMPLEXITY:
        Best: O(1)
        Average: O(n)
        Worst: O(n)

    SPACE COMPLEXITY:
        Constant: O(1)

*/
bool linear_search(int arr[], size_t len, int elem)
{
    for(size_t i=0; i < len; ++i)
    {
        if (arr[i] == elem)
        {
            return true;
        }
    }

    return false;
}

#endif /* LINEAR_SEARCH_H */