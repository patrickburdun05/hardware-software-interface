#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    if(*(int*) a > *(int *) b) {
        return 1;
    }
    return -1;
}

void *find_max(void *arr, int n, int element_size, int (*compare)(const void *, const void*))
{
    void *maxim = arr;
    int i = 0;
    for(i = 0; i < n; i++) {
        void *arr_current = (char *)arr + i * element_size;
        if(compare(arr_current,maxim) > 0) {
            maxim = arr_current;
        }
    }
    return maxim;
}