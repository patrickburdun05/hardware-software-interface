#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern)
{
    char *t = strstr(s, pattern);
    if(!t) {
        return s;
    }
    int nr_caractere = t - s;
    char *nou = malloc(strlen(s) + 1 - strlen(pattern));
    if(nou==NULL) {
        return NULL;
    }
    strncpy(nou, s, nr_caractere);
    strcpy(nou + nr_caractere, t + strlen(pattern));
    return nou;

}