#ifndef SORTEDARRAY_H
#define SORTEDARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include "../../algo/search/binary.h"

bool sorted_array_search(int arr[], size_t len, int elem)
{
    return binary_search(arr, len, elem);
}

// sorted_array_insert(void* array, size_t len, void* element, bool (*comparison)(void*, void*))
// {
//     for(size_t i=0; i < len; ++i)
//     {

//     }
// }

#endif /* SORTEDARRAY_H */