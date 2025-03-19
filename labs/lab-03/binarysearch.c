#include <stdio.h>
#include <stdlib.h>

int binary_search(int *v, int len, int dest)
{
    int low = 0;
    int high = len - 1;
    int middle;

loop:
    if(low > high) {
        return 0;
    }

    middle = low + (high - low) / 2;
    if (v[middle] == dest) {
        goto found;
    }

    if(v[middle] < dest) {
        goto left;
    }

    high = middle - 1; // destinatia se gaseste in dreapta
    goto loop;

left:
    low = middle + 1;
    goto loop;

found:
    return middle;
}