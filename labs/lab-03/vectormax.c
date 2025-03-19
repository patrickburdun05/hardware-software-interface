int vector_max(int *array, int len) {
    int max = array[0];
    int i = 1;
loop:
    if(array[i] <= max) {
        goto smaller;
    }
    max = array[i];
smaller:
    i++;
    if(i < len) {
        goto loop;
    }
return max;

}