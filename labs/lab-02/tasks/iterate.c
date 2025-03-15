#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void iterate(void *v) {
    unsigned char *p = (unsigned char*) &v;
    unsigned int i;
    for (i = 0; i < sizeof(v)/sizeof((*p)); i++) {
        printf("%p -> 0x%x\n", p, *p);
        p++;
    } 
    printf("\n");
    unsigned short *s = (unsigned short*) &v;
    for (i = 0; i < sizeof(v)/sizeof((*s)); i++) {
        printf("%p -> 0x%x\n", s, *s);
        s++;
    }
    printf("\n");
    unsigned int *t = (unsigned int*) &v;
    for (i = 0; i < sizeof(v)/sizeof((*t)); i++) {
        printf("%p -> 0x%x\n", t, *t);
        t++;
    } 


}